/* Auto-generated from "Proto.atd" */
[@ocaml.warning "-27-32-35-39"];

type session =
  Proto_t.session = {
    token: string,
    uid: string,
    createTime: int,
    expireTime: int,
    loginCode: string,
  };

type response =
  Proto_t.response = {
    code: int,
    message: string,
  };

type resLogin =
  Proto_t.resLogin = {
    code: int,
    message: string,
  };

type resGetLoginCode =
  Proto_t.resGetLoginCode = {
    code: int,
    message: string,
    loginCode: string,
  };

type reqLogin = Proto_t.reqLogin = {phone: string};

type reqGetLoginCode = Proto_t.reqGetLoginCode = {phone: string};

/** Output a JSON value of type {!session}. */

let write_session: (Bi_outbuf.t, session) => unit;

/** Serialize a value of type {!session}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_session: (~len: int=?, session) => string;

/** Input JSON data of type {!session}. */

let read_session: (Yojson.Safe.lexer_state, Lexing.lexbuf) => session;

/** Deserialize JSON data of type {!session}. */

let session_of_string: string => session;

/** Output a JSON value of type {!response}. */

let write_response: (Bi_outbuf.t, response) => unit;

/** Serialize a value of type {!response}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_response: (~len: int=?, response) => string;

/** Input JSON data of type {!response}. */

let read_response: (Yojson.Safe.lexer_state, Lexing.lexbuf) => response;

/** Deserialize JSON data of type {!response}. */

let response_of_string: string => response;

/** Output a JSON value of type {!resLogin}. */

let write_resLogin: (Bi_outbuf.t, resLogin) => unit;

/** Serialize a value of type {!resLogin}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_resLogin: (~len: int=?, resLogin) => string;

/** Input JSON data of type {!resLogin}. */

let read_resLogin: (Yojson.Safe.lexer_state, Lexing.lexbuf) => resLogin;

/** Deserialize JSON data of type {!resLogin}. */

let resLogin_of_string: string => resLogin;

/** Output a JSON value of type {!resGetLoginCode}. */

let write_resGetLoginCode: (Bi_outbuf.t, resGetLoginCode) => unit;

/** Serialize a value of type {!resGetLoginCode}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_resGetLoginCode: (~len: int=?, resGetLoginCode) => string;

/** Input JSON data of type {!resGetLoginCode}. */

let read_resGetLoginCode:
  (Yojson.Safe.lexer_state, Lexing.lexbuf) => resGetLoginCode;

/** Deserialize JSON data of type {!resGetLoginCode}. */

let resGetLoginCode_of_string: string => resGetLoginCode;

/** Output a JSON value of type {!reqLogin}. */

let write_reqLogin: (Bi_outbuf.t, reqLogin) => unit;

/** Serialize a value of type {!reqLogin}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_reqLogin: (~len: int=?, reqLogin) => string;

/** Input JSON data of type {!reqLogin}. */

let read_reqLogin: (Yojson.Safe.lexer_state, Lexing.lexbuf) => reqLogin;

/** Deserialize JSON data of type {!reqLogin}. */

let reqLogin_of_string: string => reqLogin;

/** Output a JSON value of type {!reqGetLoginCode}. */

let write_reqGetLoginCode: (Bi_outbuf.t, reqGetLoginCode) => unit;

/** Serialize a value of type {!reqGetLoginCode}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_reqGetLoginCode: (~len: int=?, reqGetLoginCode) => string;

/** Input JSON data of type {!reqGetLoginCode}. */

let read_reqGetLoginCode:
  (Yojson.Safe.lexer_state, Lexing.lexbuf) => reqGetLoginCode;

/** Deserialize JSON data of type {!reqGetLoginCode}. */

let reqGetLoginCode_of_string: string => reqGetLoginCode;
