let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <h1> (ReasonReact.string("Tic-tac-toe")) </h1>
      <p> (ReasonReact.string("One day here will be your game :)")) </p>
    </div>,
};

[%bs.raw
  {|
  fetch('https://stujo-tic-tac-toe-stujo-v1.p.mashape.com/---X--OOO/X')
  .then(function(response) {
    return response.json();
  })
  .then(function(myJson) {
    console.log(myJson);
  })
|}
];
