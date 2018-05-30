[%bs.raw {|require('./App.css')|}];

open Core;

type state = {
  board,
  gameState,
};

type action =
  | Mark(int);

let component = ReasonReact.reducerComponent("App");

let make = _children => {
  ...component,
  initialState: () => {
    gameState: Play(Cross),
    board: [None, None, None, None, None, None, None, None, None],
  },
  reducer: (action, state) =>
    switch (action) {
    | Mark(index) =>
      switch (state.gameState) {
      | Play(player) =>
        ReasonReact.Update({
          gameState: Play(player === Cross ? Circle : Cross),
          board:
            state.board
            |> List.mapi((i, field) => i === index ? Some(player) : field),
        })
      | _ => ReasonReact.NoUpdate
      }
    },
  render: self =>
    <div className="App">
      <h1> (ReasonReact.string("TicTacToe")) </h1>
      <Board
        data=self.state.board
        onClick=(index => self.send(Mark(index)))
      />
    </div>,
};
Api.fetchTicTacToe();
