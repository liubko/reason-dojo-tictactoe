let requestConfig =
  Fetch.RequestInit.make(
    ~headers=
      Fetch.HeadersInit.make({
        "X-Mashape-Key": "", /* generate an API key */
        "Accept": "application/json",
      }),
    (),
  );

/* implement decoder */
let decodeResponse = _json => ();

let fetchTicTacToe = _board => {
  /* prepare a url, based on a board and current player */
  let url = "http://";
  Fetch.fetchWithInit(url, requestConfig);
};
