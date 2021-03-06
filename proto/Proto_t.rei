/* Auto-generated from "Proto.atd" */
[@ocaml.warning "-27-32-35-39"];

type session = {
  token: string,
  uid: string,
  createTime: int,
  expireTime: int,
  loginCode: string,
};

type response = {
  code: int,
  message: string,
};

type resLogin = {
  code: int,
  message: string,
};

type resGetLoginCode = {
  code: int,
  message: string,
  loginCode: string,
};

type reqLogin = {phone: string};

type reqGetLoginCode = {phone: string};
