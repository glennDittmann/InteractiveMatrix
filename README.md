# InteractiveMatrix
An embedded c++ platformio project for a low resolution interactive screen made from LED-strips.

## Hardware
### Microcontroller
  - Arduino Mega 2560

### Proprietary 
  - Adafruit LED strips
  - Joystick
  - rotary switch
  - SD card reader 

## Wiring Table
| Label        | From      | To         | Description |
|--------------|-----------|------------|-------------|
| 1            | source    | dest       | can do magic|
| 2            | source    | dest       | is invisible|

## Dependencies
These should bes resolved via the Platformio library manager.
 - [FastLED_NeoMatrix](https://github.com/marcmerlin/FastLED_NeoMatrix)

## Pictures
Add pictures or gifs from the project here.

## Chatsheet
### Useful Links
  - [GFX drawing functions](https://github.com/adafruit/Adafruit-GFX-Library/blob/master/Adafruit_GFX.h), e.g. fillRect
  - [description of the macros](https://github.com/adafruit/Adafruit_NeoMatrix/blob/master/Adafruit_NeoMatrix.h), that describe the matrix built
  - [online tool](https://rop.nl/truetype2gfx/) for ttf to gfx readable font header

###  Project Structure
```sh
InteractiveMatrix
 ├── .pio     # external libraries, managed by PIO
 ├── include  # project header files
 │    ├── consts  # e.g. configuration for different hardware prototypes
 │    ├── fonts   # bitmap encoded fonts
 │    ├── snake   # code with snake game components
 │    └── README.md
 ├── lib  # project specific (private) libraries
 │    ├── ... 
 │    ├── InteractiveMatrix   # builds on FastLED for our specific use case
 │    └── README.md
 ├── src
 │    └── InteractiveMatrix.ino   # main application
 ├── test
 ├── .gitignore
 ├── platformio.ini  # project metadata
 └── README.md
```

## TODO
- [ ] when creating an InteractiveMatrix specify periphery objects, e.g. controller (maybe setter functions, e.g. matrix->setController())