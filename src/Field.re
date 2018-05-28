[%bs.raw {|require('./Field.css')|}];

let component = ReasonReact.statelessComponent("Field");

let make = (~data: Core.field, ~onClick, _children) => {
  ...component,
  render: _self =>
    <div
      className="Field"
      onClick=(
        e =>
          switch (data) {
          | Some(_) => ()
          | None => onClick(e)
          }
      )>
      (
        switch (data) {
        | Some(Cross) => ReasonReact.string("X")
        | Some(Circle) => ReasonReact.string("0")
        | None => ReasonReact.null
        }
      )
    </div>,
};
