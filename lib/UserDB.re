open ReMongo;

module User = {
  type t = {
    id: string,
    phone: string,
    email: string,
    nickname: string,
    createTime: int64,
    updateTime: int64,
  };
};

let makeUser = (phone, email, nickname, createTime, updateTime) =>
  User.{id: "", phone, email, nickname, createTime, updateTime};

let userFromDoc = doc => {
  let u = doc;
  let id =
    u |> Bson.getElement("_id") |> Bson.getObjectId |> ObjectId.toString;
  let phone = u |> Bson.getElement("phone") |> Bson.getString;
  let email = u |> Bson.getElement("email") |> Bson.getString;
  let nickname = u |> Bson.getElement("nickname") |> Bson.getString;
  let createTime = u |> Bson.getElement("create_time") |> Bson.getInt64;
  let updateTime = u |> Bson.getElement("update_time") |> Bson.getInt64;
  User.{id, phone, email, nickname, createTime, updateTime};
};

let addUser = (user: User.t) => {
  let%lwt usersCollection = Mongo_lwt.createLocalDefault("db", "users");

  let newUserDoc =
    Bson.fromElements([
      ("_id", Bson.createObjectId(ObjectId.generate())),
      ("phone", Bson.createString(user.phone)),
      ("email", Bson.createString(user.email)),
      ("nickname", Bson.createString(user.nickname)),
      ("create_time", Bson.createUtc(user.createTime)),
      ("update_time", Bson.createUtc(user.updateTime)),
    ]);
  Mongo_lwt.insert(usersCollection, [newUserDoc]);
};

let delUserByID = userID => {
  let%lwt usersCollection = Mongo_lwt.createLocalDefault("db", "users");

  let queryDoc =
    Bson.fromElements([
      ("_id", Bson.createObjectId(ObjectId.fromString(userID))),
    ]);
  let updateDoc =
    [("del_flag", Bson.createInt32(Int32.of_int(1)))] |> Bson.fromElements;

  let doc = [] |> Bson.fromElements;
  let doc = Bson.addElement("$set", Bson.createDocElement(updateDoc), doc);

  Mongo_lwt.update_one(usersCollection, (queryDoc, doc));
};

let delUserByPhone = phone => {
  let%lwt usersCollection = Mongo_lwt.createLocalDefault("db", "users");

  let queryDoc =
    Bson.fromElements([("phone", Bson.createString("1729819219"))]);
  let updateDoc =
    [("del_flag", Bson.createInt32(Int32.of_int(1)))] |> Bson.fromElements;

  let doc = [] |> Bson.fromElements;
  let doc = Bson.addElement("$set", Bson.createDocElement(updateDoc), doc);

  Mongo_lwt.update_one(usersCollection, (queryDoc, doc));
};

let getUserByPhone = phone => {
  let%lwt usersCollection = Mongo_lwt.createLocalDefault("db", "users");

  let queryDoc =
    Bson.fromElements([
      ("phone", Bson.createString(phone)),
      ("del_flag", Bson.createInt32(Int32.of_int(0))),
    ]);
  let%lwt res = Mongo_lwt.find_q_one(usersCollection, queryDoc);
  let docList = res |> MongoReply.getDocumentList;
  let _ = docList |> List.map(Bson.toSimpleJson) |> List.map(print_endline);
  let n = List.length(docList);
  switch (n) {
  | 0 => Lwt.return(None)
  | _ =>
    let u = List.nth(docList, 0);
    let user = userFromDoc(u);
    Lwt.return(Some(user));
  };
};