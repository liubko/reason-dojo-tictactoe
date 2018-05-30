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

> [#variant](https://reasonml.github.io/docs/en/variant.html#docsNav), [#option](https://reasonml.github.io/docs/en/variant.html#option)

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

> [#statelessComponent](https://reasonml.github.io/reason-react/docs/en/creation-props-self.html), [#bs.raw](https://bucklescript.github.io/docs/en/embed-raw-javascript.html)

### Add interactivity

Add onClick handler to `<Filed />`, handle game logic.

> [#reducerComponent](https://reasonml.github.io/reason-react/docs/en/state-actions-reducer.html)

### Connect with API

Install [bs-fetch](https://github.com/reasonml-community/bs-fetch) and [bs-json](https://github.com/glennsl/bs-json). Make API request and decode responses.

API: https://market.mashape.com/stujo/tic-tac-toe

> [#bs-fetch](https://github.com/reasonml-community/bs-fetch), [#bs-json](https://github.com/glennsl/bs-json)

### Polishing, improvements

* fixing any bags in game logic.
* win/lose/draw message
* ability to restart game
