[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <h1> (ReasonReact.string("Tic-tac-toe")) </h1>
      <p> (ReasonReact.string("One day here will be your game :)")) </p>
    </div>,
};
