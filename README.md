# InteractiveMatrix
An embedded c++ project for a low resolution interactive screen made from LED-strips.

## Hardware
### Microcontroller
  - Arduino Mega 2560

### Proprietary 
  - Adafruit LED strips
  - Joystick: 

##  Project Structure
Each subfolder iteself is a *platformio* project with its own README, explaining setup, functionality and dependencies. <br>
*InterActive* is the main library setting up all hardware components (led strips, microcontroller, ) to be controlled. <br>
Each other folder is a project using the main library *InterActive Matrix*, e.g. *SnakeGame* renders the classic snake game on the "screen". 
```sh
pmlab-lite
 ├── InteractiveMatrix
 │     ├── ...
 │     └── ...
 ├── SnakeGame
 │     ├── ...
 │     └── ...
 ├── .gitignore
 └── README.md
```
### InterActive Matrix
Main library ...

### SnakeGame
Implementation of the classical snake game.

## Pictures
Add pictures or gifs from the project here.

## Cheatsheet
  - Wiring: 

# InteractiveMatrix
## TODO
  - when creating an InteractiveMatrix specify periphery objects, e.g. controller (maybe setter functions, e.g. matrix->setController())

## Dependencies
 - [FastLED_NeoMatrix](https://github.com/marcmerlin/FastLED_NeoMatrix)

## Chatsheet
  - [GFX drawing functions](https://github.com/adafruit/Adafruit-GFX-Library/blob/master/Adafruit_GFX.h), e.g. fillRect
  - [description of the macros](https://github.com/adafruit/Adafruit_NeoMatrix/blob/master/Adafruit_NeoMatrix.h), that describe the matrix built
  - [online tool](https://rop.nl/truetype2gfx/) for ttf to gfx readable font header: 