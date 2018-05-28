type player =
  | Circle
  | Cross;

type field = option(player);

type board = list(field);

type gameState =
  | Win(player)
  | Draw
  | Play(player);
