open ReMongo;

module Session = {
  type t = {
    id: string,
    userID: string,
    token: string,
    createTime: int64,
    /* updateTime: int64, */
    expireTime: int64,
  };
};

let makeSession = (userID, token, createTime, expireTime) =>
  Session.{id: "", userID, token, createTime, expireTime};

let sessionFromDoc = doc => {
  let id =
    doc |> Bson.getElement("_id") |> Bson.getObjectId |> ObjectId.toString;
  let userID = doc |> Bson.getElement("user_id") |> Bson.getString;
  let token = doc |> Bson.getElement("token") |> Bson.getString;
  let createTime = doc |> Bson.getElement("create_time") |> Bson.getInt64;
  let expireTime = doc |> Bson.getElement("expire_time") |> Bson.getInt64;
  Session.{id, userID, token, createTime, expireTime};
};

let newSession = (session: Session.t) => {
  let%lwt sessionCollection = Mongo_lwt.createLocalDefault("db", "sessions");

  let newSessionDoc =
    Bson.fromElements([
      ("_id", Bson.createObjectId(ObjectId.generate())),
      ("user_id", Bson.createString(session.userID)),
      ("token", Bson.createString(session.token)),
      ("create_time", Bson.createUtc(session.createTime)),
      ("expire_time", Bson.createUtc(session.expireTime)),
    ]);
  Mongo_lwt.insert(sessionCollection, [newSessionDoc]);
};

let delSessionByID = sessionID => {
  let%lwt sessionCollection = Mongo_lwt.createLocalDefault("db", "sessions");

  let queryDoc =
    Bson.fromElements([
      ("_id", Bson.createObjectId(ObjectId.fromString(sessionID))),
    ]);

  Mongo_lwt.delete_one(sessionCollection, queryDoc);
};

let getSessionByToken = token => {
  let%lwt sessionCollection = Mongo_lwt.createLocalDefault("db", "sessions");

  let queryDoc = Bson.fromElements([("token", Bson.createString(token))]);
  let%lwt res = Mongo_lwt.find_q_one(sessionCollection, queryDoc);
  let docList = res |> MongoReply.getDocumentList;
  let _ = docList |> List.map(Bson.toSimpleJson) |> List.map(print_endline);
  let n = List.length(docList);
  switch (n) {
  | 0 => Lwt.return(None)
  | _ =>
    let s = List.nth(docList, 0);
    let session = sessionFromDoc(s);
    Lwt.return(Some(session));
  };
};