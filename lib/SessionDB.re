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