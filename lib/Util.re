let hello = () =>
  Pastel.(
    <Pastel>
      <Pastel color=Red> "Hello" </Pastel>
      ", "
      <Pastel color=Green> "World" </Pastel>
      "!"
    </Pastel>
  );

/*let start = () => Lwt_main.run(addToDB());*/

open Lwt;
/* open Lwt.Infix */
open Cohttp;
/* open Cohttp_lwt; */
open Cohttp_lwt_unix;
/* Cohttp_lwt__Body.to_string */
Cohttp_lwt.Body.to_string;

let callback = (_conn, req, body) => {
  let uri = req |> Request.uri |> Uri.to_string;
  let meth = req |> Request.meth |> Code.string_of_method;
  let headers = req |> Request.headers |> Header.to_string;
  let%lwt bodyStr = body |> Cohttp_lwt.Body.to_string;
  let _ =
    Console.log(
      Printf.sprintf(
        "Uri: %s\nMethod: %s\nHeaders\nHeaders: %s\nBody: %s",
        uri,
        meth,
        headers,
        bodyStr,
      ),
    );
  Server.respond_string(
    ~status=Cohttp.Code.status_of_code(200),
    ~body="{\"xyz\"=123}",
    (),
  );
  /* >|= (
       fun body =>
         Printf.sprintf "Uri: %s\nMethod: %s\nHeaders\nHeaders: %s\nBody: %s" uri meth headers body
     ) >>= (
       fun body => Server.respond_string status::`OK body::body ()
     ) */
};

/* let s = Server.make(~callback, ()); */
let server =
  Server.create(~mode=`TCP(`Port(8000)), Server.make(~callback, ()));
/* let mode = Cohttp_lwt.Make_server. */
/* let server = Server.create(s); */

/* let () = ignore(Lwt_main.run(server)); */
let start = () => Lwt_main.run(server);