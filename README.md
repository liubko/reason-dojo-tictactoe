# TicTacToe _[ReasonDojo (Lviv, UA)](https://t.me/joinchat/GrDgEwvl4sI0adTX_yaD-A)_

## Requirments

* You need `node@^8.0.0`.
* install [reason-cli](https://reasonml.github.io/docs/en/global-installation.html#recommended-through-npm-yarn)
* install [bs-platform](https://reasonml.github.io/docs/en/extra-goodies.html#bucklescript) `npm install -g bs-platform`
* [setup your editor](https://reasonml.github.io/docs/en/editor-plugins.html#officially-supported-editors). At the current time VSCode is recomended.

## Project setup

Clone this project and install all deps

```
git clone git@github.com:liubko/reason-dojo-tictactoe.git
npm install
```

## Develop

```
npm start
// open localhost:3000
```

## High overview plan for the dojo

### Core

Add basic types to describe the core of the game.

```
type player = ...;
type field = ...;
type board = ...;
type gameState = ...;
```

Hashtags: `#variant` `#option`

### Create a static UI to display a board

Styles are already included.

```
Board.css
Field.css
```

Create a waterfall of components:

```
| <App />
|-- <Board />
|---- <Field />
```

Hashtags: `#statelessComponent`, `#modules`, `#bs.raw`

### Add interactivity

Add onClick handler to `<Filed />`, handle game logic.

Hashtags: `#reducerComponent`

### Connect with API

Install `bs-fetch` and `bs-json`. Make API request and decode responses.

API: https://market.mashape.com/stujo/tic-tac-toe

Hashtags: `#bs-fetch`, `#bs-json`

### Polishing, improvements

* fixing any bags in game logic.
* win/lose/draw message
* ability to restart game
