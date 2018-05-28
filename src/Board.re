[%bs.raw {|require('./Board.css')|}];

let component = ReasonReact.statelessComponent("Board");

let make = (~data: Core.board, ~onClick, _children) => {
  ...component,
  render: _self =>
    <div className="Board">
      (
        data
        |> List.mapi((index, field) =>
             <Field
               data=field
               key=(string_of_int(index))
               onClick=(_ => onClick(index))
             />
           )
        |> Array.of_list
        |> ReasonReact.array
      )
    </div>,
};
