[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App"> <h1> (ReasonReact.string("TicTacToe")) </h1> </div>,
};
