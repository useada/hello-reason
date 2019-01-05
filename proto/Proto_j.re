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

let write_session: (_, session) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"token\":");
    Yojson.Safe.write_string(ob, x.token);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"uid\":");
    Yojson.Safe.write_string(ob, x.uid);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"createTime\":");
    Yojson.Safe.write_int(ob, x.createTime);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"expireTime\":");
    Yojson.Safe.write_int(ob, x.expireTime);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"loginCode\":");
    Yojson.Safe.write_string(ob, x.loginCode);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, session) => _
);
let string_of_session = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_session(ob, x);
  Bi_outbuf.contents(ob);
};
let read_session = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_token = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_uid = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_createTime = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_expireTime = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_loginCode = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        switch (len) {
        | 3 =>
          if (String.unsafe_get(s, pos) == 'u'
              && String.unsafe_get(s, pos + 1) == 'i'
              && String.unsafe_get(s, pos + 2) == 'd') {
            1;
          } else {
            (-1);
          }
        | 5 =>
          if (String.unsafe_get(s, pos) == 't'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'k'
              && String.unsafe_get(s, pos + 3) == 'e'
              && String.unsafe_get(s, pos + 4) == 'n') {
            0;
          } else {
            (-1);
          }
        | 9 =>
          if (String.unsafe_get(s, pos) == 'l'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'g'
              && String.unsafe_get(s, pos + 3) == 'i'
              && String.unsafe_get(s, pos + 4) == 'n'
              && String.unsafe_get(s, pos + 5) == 'C'
              && String.unsafe_get(s, pos + 6) == 'o'
              && String.unsafe_get(s, pos + 7) == 'd'
              && String.unsafe_get(s, pos + 8) == 'e') {
            4;
          } else {
            (-1);
          }
        | 10 =>
          switch (String.unsafe_get(s, pos)) {
          | 'c' =>
            if (String.unsafe_get(s, pos + 1) == 'r'
                && String.unsafe_get(s, pos + 2) == 'e'
                && String.unsafe_get(s, pos + 3) == 'a'
                && String.unsafe_get(s, pos + 4) == 't'
                && String.unsafe_get(s, pos + 5) == 'e'
                && String.unsafe_get(s, pos + 6) == 'T'
                && String.unsafe_get(s, pos + 7) == 'i'
                && String.unsafe_get(s, pos + 8) == 'm'
                && String.unsafe_get(s, pos + 9) == 'e') {
              2;
            } else {
              (-1);
            }
          | 'e' =>
            if (String.unsafe_get(s, pos + 1) == 'x'
                && String.unsafe_get(s, pos + 2) == 'p'
                && String.unsafe_get(s, pos + 3) == 'i'
                && String.unsafe_get(s, pos + 4) == 'r'
                && String.unsafe_get(s, pos + 5) == 'e'
                && String.unsafe_get(s, pos + 6) == 'T'
                && String.unsafe_get(s, pos + 7) == 'i'
                && String.unsafe_get(s, pos + 8) == 'm'
                && String.unsafe_get(s, pos + 9) == 'e') {
              3;
            } else {
              (-1);
            }
          | _ => (-1)
          }
        | _ => (-1)
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_token := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x1;
      | 1 =>
        field_uid := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x2;
      | 2 =>
        field_createTime := Atdgen_runtime.Oj_run.read_int(p, lb);
        bits0 := bits0^ lor 0x4;
      | 3 =>
        field_expireTime := Atdgen_runtime.Oj_run.read_int(p, lb);
        bits0 := bits0^ lor 0x8;
      | 4 =>
        field_loginCode := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x10;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          switch (len) {
          | 3 =>
            if (String.unsafe_get(s, pos) == 'u'
                && String.unsafe_get(s, pos + 1) == 'i'
                && String.unsafe_get(s, pos + 2) == 'd') {
              1;
            } else {
              (-1);
            }
          | 5 =>
            if (String.unsafe_get(s, pos) == 't'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'k'
                && String.unsafe_get(s, pos + 3) == 'e'
                && String.unsafe_get(s, pos + 4) == 'n') {
              0;
            } else {
              (-1);
            }
          | 9 =>
            if (String.unsafe_get(s, pos) == 'l'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'g'
                && String.unsafe_get(s, pos + 3) == 'i'
                && String.unsafe_get(s, pos + 4) == 'n'
                && String.unsafe_get(s, pos + 5) == 'C'
                && String.unsafe_get(s, pos + 6) == 'o'
                && String.unsafe_get(s, pos + 7) == 'd'
                && String.unsafe_get(s, pos + 8) == 'e') {
              4;
            } else {
              (-1);
            }
          | 10 =>
            switch (String.unsafe_get(s, pos)) {
            | 'c' =>
              if (String.unsafe_get(s, pos + 1) == 'r'
                  && String.unsafe_get(s, pos + 2) == 'e'
                  && String.unsafe_get(s, pos + 3) == 'a'
                  && String.unsafe_get(s, pos + 4) == 't'
                  && String.unsafe_get(s, pos + 5) == 'e'
                  && String.unsafe_get(s, pos + 6) == 'T'
                  && String.unsafe_get(s, pos + 7) == 'i'
                  && String.unsafe_get(s, pos + 8) == 'm'
                  && String.unsafe_get(s, pos + 9) == 'e') {
                2;
              } else {
                (-1);
              }
            | 'e' =>
              if (String.unsafe_get(s, pos + 1) == 'x'
                  && String.unsafe_get(s, pos + 2) == 'p'
                  && String.unsafe_get(s, pos + 3) == 'i'
                  && String.unsafe_get(s, pos + 4) == 'r'
                  && String.unsafe_get(s, pos + 5) == 'e'
                  && String.unsafe_get(s, pos + 6) == 'T'
                  && String.unsafe_get(s, pos + 7) == 'i'
                  && String.unsafe_get(s, pos + 8) == 'm'
                  && String.unsafe_get(s, pos + 9) == 'e') {
                3;
              } else {
                (-1);
              }
            | _ => (-1)
            }
          | _ => (-1)
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_token := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x1;
        | 1 =>
          field_uid := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x2;
        | 2 =>
          field_createTime := Atdgen_runtime.Oj_run.read_int(p, lb);
          bits0 := bits0^ lor 0x4;
        | 3 =>
          field_expireTime := Atdgen_runtime.Oj_run.read_int(p, lb);
          bits0 := bits0^ lor 0x8;
        | 4 =>
          field_loginCode := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x10;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x1f) {
      Atdgen_runtime.Oj_run.missing_fields(
        p,
        [|bits0^|],
        [|"token", "uid", "createTime", "expireTime", "loginCode"|],
      );
    };
    (
      {
        token: field_token^,
        uid: field_uid^,
        createTime: field_createTime^,
        expireTime: field_expireTime^,
        loginCode: field_loginCode^,
      }: session
    );
  };
};
let session_of_string = s =>
  read_session(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_response: (_, response) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"code\":");
    Yojson.Safe.write_int(ob, x.code);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"message\":");
    Yojson.Safe.write_string(ob, x.message);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, response) => _
);
let string_of_response = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_response(ob, x);
  Bi_outbuf.contents(ob);
};
let read_response = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_code = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_message = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        switch (len) {
        | 4 =>
          if (String.unsafe_get(s, pos) == 'c'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'd'
              && String.unsafe_get(s, pos + 3) == 'e') {
            0;
          } else {
            (-1);
          }
        | 7 =>
          if (String.unsafe_get(s, pos) == 'm'
              && String.unsafe_get(s, pos + 1) == 'e'
              && String.unsafe_get(s, pos + 2) == 's'
              && String.unsafe_get(s, pos + 3) == 's'
              && String.unsafe_get(s, pos + 4) == 'a'
              && String.unsafe_get(s, pos + 5) == 'g'
              && String.unsafe_get(s, pos + 6) == 'e') {
            1;
          } else {
            (-1);
          }
        | _ => (-1)
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
        bits0 := bits0^ lor 0x1;
      | 1 =>
        field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x2;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          switch (len) {
          | 4 =>
            if (String.unsafe_get(s, pos) == 'c'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'd'
                && String.unsafe_get(s, pos + 3) == 'e') {
              0;
            } else {
              (-1);
            }
          | 7 =>
            if (String.unsafe_get(s, pos) == 'm'
                && String.unsafe_get(s, pos + 1) == 'e'
                && String.unsafe_get(s, pos + 2) == 's'
                && String.unsafe_get(s, pos + 3) == 's'
                && String.unsafe_get(s, pos + 4) == 'a'
                && String.unsafe_get(s, pos + 5) == 'g'
                && String.unsafe_get(s, pos + 6) == 'e') {
              1;
            } else {
              (-1);
            }
          | _ => (-1)
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
          bits0 := bits0^ lor 0x1;
        | 1 =>
          field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x2;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x3) {
      Atdgen_runtime.Oj_run.missing_fields(
        p,
        [|bits0^|],
        [|"code", "message"|],
      );
    };
    ({code: field_code^, message: field_message^}: response);
  };
};
let response_of_string = s =>
  read_response(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_resLogin: (_, resLogin) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"code\":");
    Yojson.Safe.write_int(ob, x.code);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"message\":");
    Yojson.Safe.write_string(ob, x.message);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, resLogin) => _
);
let string_of_resLogin = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_resLogin(ob, x);
  Bi_outbuf.contents(ob);
};
let read_resLogin = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_code = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_message = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        switch (len) {
        | 4 =>
          if (String.unsafe_get(s, pos) == 'c'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'd'
              && String.unsafe_get(s, pos + 3) == 'e') {
            0;
          } else {
            (-1);
          }
        | 7 =>
          if (String.unsafe_get(s, pos) == 'm'
              && String.unsafe_get(s, pos + 1) == 'e'
              && String.unsafe_get(s, pos + 2) == 's'
              && String.unsafe_get(s, pos + 3) == 's'
              && String.unsafe_get(s, pos + 4) == 'a'
              && String.unsafe_get(s, pos + 5) == 'g'
              && String.unsafe_get(s, pos + 6) == 'e') {
            1;
          } else {
            (-1);
          }
        | _ => (-1)
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
        bits0 := bits0^ lor 0x1;
      | 1 =>
        field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x2;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          switch (len) {
          | 4 =>
            if (String.unsafe_get(s, pos) == 'c'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'd'
                && String.unsafe_get(s, pos + 3) == 'e') {
              0;
            } else {
              (-1);
            }
          | 7 =>
            if (String.unsafe_get(s, pos) == 'm'
                && String.unsafe_get(s, pos + 1) == 'e'
                && String.unsafe_get(s, pos + 2) == 's'
                && String.unsafe_get(s, pos + 3) == 's'
                && String.unsafe_get(s, pos + 4) == 'a'
                && String.unsafe_get(s, pos + 5) == 'g'
                && String.unsafe_get(s, pos + 6) == 'e') {
              1;
            } else {
              (-1);
            }
          | _ => (-1)
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
          bits0 := bits0^ lor 0x1;
        | 1 =>
          field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x2;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x3) {
      Atdgen_runtime.Oj_run.missing_fields(
        p,
        [|bits0^|],
        [|"code", "message"|],
      );
    };
    ({code: field_code^, message: field_message^}: resLogin);
  };
};
let resLogin_of_string = s =>
  read_resLogin(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_resGetLoginCode: (_, resGetLoginCode) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"code\":");
    Yojson.Safe.write_int(ob, x.code);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"message\":");
    Yojson.Safe.write_string(ob, x.message);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"loginCode\":");
    Yojson.Safe.write_string(ob, x.loginCode);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, resGetLoginCode) => _
);
let string_of_resGetLoginCode = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_resGetLoginCode(ob, x);
  Bi_outbuf.contents(ob);
};
let read_resGetLoginCode = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_code = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_message = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let field_loginCode = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        switch (len) {
        | 4 =>
          if (String.unsafe_get(s, pos) == 'c'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'd'
              && String.unsafe_get(s, pos + 3) == 'e') {
            0;
          } else {
            (-1);
          }
        | 7 =>
          if (String.unsafe_get(s, pos) == 'm'
              && String.unsafe_get(s, pos + 1) == 'e'
              && String.unsafe_get(s, pos + 2) == 's'
              && String.unsafe_get(s, pos + 3) == 's'
              && String.unsafe_get(s, pos + 4) == 'a'
              && String.unsafe_get(s, pos + 5) == 'g'
              && String.unsafe_get(s, pos + 6) == 'e') {
            1;
          } else {
            (-1);
          }
        | 9 =>
          if (String.unsafe_get(s, pos) == 'l'
              && String.unsafe_get(s, pos + 1) == 'o'
              && String.unsafe_get(s, pos + 2) == 'g'
              && String.unsafe_get(s, pos + 3) == 'i'
              && String.unsafe_get(s, pos + 4) == 'n'
              && String.unsafe_get(s, pos + 5) == 'C'
              && String.unsafe_get(s, pos + 6) == 'o'
              && String.unsafe_get(s, pos + 7) == 'd'
              && String.unsafe_get(s, pos + 8) == 'e') {
            2;
          } else {
            (-1);
          }
        | _ => (-1)
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
        bits0 := bits0^ lor 0x1;
      | 1 =>
        field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x2;
      | 2 =>
        field_loginCode := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x4;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          switch (len) {
          | 4 =>
            if (String.unsafe_get(s, pos) == 'c'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'd'
                && String.unsafe_get(s, pos + 3) == 'e') {
              0;
            } else {
              (-1);
            }
          | 7 =>
            if (String.unsafe_get(s, pos) == 'm'
                && String.unsafe_get(s, pos + 1) == 'e'
                && String.unsafe_get(s, pos + 2) == 's'
                && String.unsafe_get(s, pos + 3) == 's'
                && String.unsafe_get(s, pos + 4) == 'a'
                && String.unsafe_get(s, pos + 5) == 'g'
                && String.unsafe_get(s, pos + 6) == 'e') {
              1;
            } else {
              (-1);
            }
          | 9 =>
            if (String.unsafe_get(s, pos) == 'l'
                && String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'g'
                && String.unsafe_get(s, pos + 3) == 'i'
                && String.unsafe_get(s, pos + 4) == 'n'
                && String.unsafe_get(s, pos + 5) == 'C'
                && String.unsafe_get(s, pos + 6) == 'o'
                && String.unsafe_get(s, pos + 7) == 'd'
                && String.unsafe_get(s, pos + 8) == 'e') {
              2;
            } else {
              (-1);
            }
          | _ => (-1)
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_code := Atdgen_runtime.Oj_run.read_int(p, lb);
          bits0 := bits0^ lor 0x1;
        | 1 =>
          field_message := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x2;
        | 2 =>
          field_loginCode := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x4;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x7) {
      Atdgen_runtime.Oj_run.missing_fields(
        p,
        [|bits0^|],
        [|"code", "message", "loginCode"|],
      );
    };
    (
      {code: field_code^, message: field_message^, loginCode: field_loginCode^}: resGetLoginCode
    );
  };
};
let resGetLoginCode_of_string = s =>
  read_resGetLoginCode(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_reqLogin: (_, reqLogin) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"phone\":");
    Yojson.Safe.write_string(ob, x.phone);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, reqLogin) => _
);
let string_of_reqLogin = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_reqLogin(ob, x);
  Bi_outbuf.contents(ob);
};
let read_reqLogin = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_phone = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        if (len == 5
            && String.unsafe_get(s, pos) == 'p'
            && String.unsafe_get(s, pos + 1) == 'h'
            && String.unsafe_get(s, pos + 2) == 'o'
            && String.unsafe_get(s, pos + 3) == 'n'
            && String.unsafe_get(s, pos + 4) == 'e') {
          0;
        } else {
          (-1);
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_phone := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x1;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          if (len == 5
              && String.unsafe_get(s, pos) == 'p'
              && String.unsafe_get(s, pos + 1) == 'h'
              && String.unsafe_get(s, pos + 2) == 'o'
              && String.unsafe_get(s, pos + 3) == 'n'
              && String.unsafe_get(s, pos + 4) == 'e') {
            0;
          } else {
            (-1);
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_phone := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x1;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x1) {
      Atdgen_runtime.Oj_run.missing_fields(p, [|bits0^|], [|"phone"|]);
    };
    ({phone: field_phone^}: reqLogin);
  };
};
let reqLogin_of_string = s =>
  read_reqLogin(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_reqGetLoginCode: (_, reqGetLoginCode) => _ = (
  (ob, x) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"phone\":");
    Yojson.Safe.write_string(ob, x.phone);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, reqGetLoginCode) => _
);
let string_of_reqGetLoginCode = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_reqGetLoginCode(ob, x);
  Bi_outbuf.contents(ob);
};
let read_reqGetLoginCode = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_phone = ref(Obj.magic(Sys.opaque_identity(0.0)));
  let bits0 = ref(0);
  try (
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        if (len == 5
            && String.unsafe_get(s, pos) == 'p'
            && String.unsafe_get(s, pos + 1) == 'h'
            && String.unsafe_get(s, pos + 2) == 'o'
            && String.unsafe_get(s, pos + 3) == 'n'
            && String.unsafe_get(s, pos + 4) == 'e') {
          0;
        } else {
          (-1);
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 =>
        field_phone := Atdgen_runtime.Oj_run.read_string(p, lb);
        bits0 := bits0^ lor 0x1;
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          if (len == 5
              && String.unsafe_get(s, pos) == 'p'
              && String.unsafe_get(s, pos + 1) == 'h'
              && String.unsafe_get(s, pos + 2) == 'o'
              && String.unsafe_get(s, pos + 3) == 'n'
              && String.unsafe_get(s, pos + 4) == 'e') {
            0;
          } else {
            (-1);
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 =>
          field_phone := Atdgen_runtime.Oj_run.read_string(p, lb);
          bits0 := bits0^ lor 0x1;
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object =>
    if (bits0^ != 0x1) {
      Atdgen_runtime.Oj_run.missing_fields(p, [|bits0^|], [|"phone"|]);
    };
    ({phone: field_phone^}: reqGetLoginCode);
  };
};
let reqGetLoginCode_of_string = s =>
  read_reqGetLoginCode(Yojson.Safe.init_lexer(), Lexing.from_string(s));
