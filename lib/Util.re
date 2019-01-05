let hello = () =>
  Pastel.(
    <Pastel>
      <Pastel color=Red> "Hello" </Pastel>
      ", "
      <Pastel color=Green> "World" </Pastel>
      "!"
    </Pastel>
  );

open Lwt;
open Cohttp;
open Cohttp_lwt_unix;

let callback_get_login_code = (req, body) => {
  /* let headers = req |> Request.headers |> Header.to_string; */
  let%lwt bodyStr = body |> Cohttp_lwt.Body.to_string;
  let req = Proto.Proto_j.reqGetLoginCode_of_string(bodyStr);
  /* let phone = req.phone; */
  let res: Proto.Proto_j.resGetLoginCode = {
    code: 0,
    message: "success",
    loginCode: "123",
  };
  Server.respond_string(
    ~status=Cohttp.Code.status_of_code(200),
    ~body=Proto.Proto_j.string_of_resGetLoginCode(res),
    (),
  );
};

let route = (path, req, body) =>
  switch (path) {
  | "/get_login_code" => callback_get_login_code(req, body)
  | _ =>
    Server.respond_string(
      ~status=Cohttp.Code.status_of_code(404),
      ~body="HTTP 404 ~ Page Not Found",
      (),
    )
  };

let callback = (_conn, req, body) => {
  let uri = req |> Request.uri;
  let uriStr = uri |> Uri.to_string;
  let meth = req |> Request.meth |> Code.string_of_method;
  let headers = req |> Request.headers |> Header.to_string;
  let _ =
    Console.log(
      Printf.sprintf(
        "Uri: %s\nMethod: %s\nHeaders\nHeaders: %s",
        uriStr,
        meth,
        headers,
      ),
    );
  let path = Uri.path(uri);
  route(path, req, body);
};

let server =
  Server.create(~mode=`TCP(`Port(8000)), Server.make(~callback, ()));
/* let () = ignore(Lwt_main.run(server)); */
let start = () => Lwt_main.run(server);