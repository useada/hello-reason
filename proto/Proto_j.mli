(* Auto-generated from "Proto.atd" *)
[@@@ocaml.warning "-27-32-35-39"]

type response = Proto_t.response = { code: int; message: string }

type resLogin = Proto_t.resLogin = { code: int; message: string }

type resGetLoginCode = Proto_t.resGetLoginCode = {
  code: int;
  message: string;
  loginCode: string
}

type reqLogin = Proto_t.reqLogin = { phone: string }

type reqGetLoginCode = Proto_t.reqGetLoginCode = { phone: string }

val write_response :
  Bi_outbuf.t -> response -> unit
  (** Output a JSON value of type {!response}. *)

val string_of_response :
  ?len:int -> response -> string
  (** Serialize a value of type {!response}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. *)

val read_response :
  Yojson.Safe.lexer_state -> Lexing.lexbuf -> response
  (** Input JSON data of type {!response}. *)

val response_of_string :
  string -> response
  (** Deserialize JSON data of type {!response}. *)

val write_resLogin :
  Bi_outbuf.t -> resLogin -> unit
  (** Output a JSON value of type {!resLogin}. *)

val string_of_resLogin :
  ?len:int -> resLogin -> string
  (** Serialize a value of type {!resLogin}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. *)

val read_resLogin :
  Yojson.Safe.lexer_state -> Lexing.lexbuf -> resLogin
  (** Input JSON data of type {!resLogin}. *)

val resLogin_of_string :
  string -> resLogin
  (** Deserialize JSON data of type {!resLogin}. *)

val write_resGetLoginCode :
  Bi_outbuf.t -> resGetLoginCode -> unit
  (** Output a JSON value of type {!resGetLoginCode}. *)

val string_of_resGetLoginCode :
  ?len:int -> resGetLoginCode -> string
  (** Serialize a value of type {!resGetLoginCode}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. *)

val read_resGetLoginCode :
  Yojson.Safe.lexer_state -> Lexing.lexbuf -> resGetLoginCode
  (** Input JSON data of type {!resGetLoginCode}. *)

val resGetLoginCode_of_string :
  string -> resGetLoginCode
  (** Deserialize JSON data of type {!resGetLoginCode}. *)

val write_reqLogin :
  Bi_outbuf.t -> reqLogin -> unit
  (** Output a JSON value of type {!reqLogin}. *)

val string_of_reqLogin :
  ?len:int -> reqLogin -> string
  (** Serialize a value of type {!reqLogin}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. *)

val read_reqLogin :
  Yojson.Safe.lexer_state -> Lexing.lexbuf -> reqLogin
  (** Input JSON data of type {!reqLogin}. *)

val reqLogin_of_string :
  string -> reqLogin
  (** Deserialize JSON data of type {!reqLogin}. *)

val write_reqGetLoginCode :
  Bi_outbuf.t -> reqGetLoginCode -> unit
  (** Output a JSON value of type {!reqGetLoginCode}. *)

val string_of_reqGetLoginCode :
  ?len:int -> reqGetLoginCode -> string
  (** Serialize a value of type {!reqGetLoginCode}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. *)

val read_reqGetLoginCode :
  Yojson.Safe.lexer_state -> Lexing.lexbuf -> reqGetLoginCode
  (** Input JSON data of type {!reqGetLoginCode}. *)

val reqGetLoginCode_of_string :
  string -> reqGetLoginCode
  (** Deserialize JSON data of type {!reqGetLoginCode}. *)

