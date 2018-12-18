open ReMongo;

let hello = () =>
  Pastel.(
    <Pastel>
      <Pastel color=Red> "Hello" </Pastel>
      ", "
      <Pastel color=Green> "World" </Pastel>
      "!"
    </Pastel>
  );

module User = {
  type t = {
    id: string,
    email: string,
    firstname: string,
    lastname: string,
  };
};

let addToDB = () => {
  /* connect to localhost Mongo db with default port */
  let%lwt usersCollection = Mongo_lwt.createLocalDefault("db", "users");

  let newUserDoc =
    Bson.fromElements([
      ("_id", Bson.createObjectId(ObjectId.generate())),
      ("email", Bson.createString("useada@126.com")),
      ("firstname", Bson.createString("firstname")),
      ("lastname", Bson.createString("lastname")),
    ]);
  let%lwt () = Mongo_lwt.insert(usersCollection, [newUserDoc]);
  Lwt.return_ok();
};

let start = () => Lwt_main.run(addToDB());