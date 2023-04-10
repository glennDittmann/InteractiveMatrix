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