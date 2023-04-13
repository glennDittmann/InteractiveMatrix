# InteractiveMatrix
An embedded c++ platformio project for a low resolution interactive screen made from LED-strips.

## Hardware
### Microcontroller
  - Arduino Mega 2560

### Periphery 
  - Adafruit LED strips
  - Joystick
  - rotary switch
  - SD card reader 

## Wiring Table
| Label        | From         | To  | Description |
|--------------|--------------|-----|--------------------------------------------------|
| 1            | +            | 5V  | serves microcontroller with power                |
| 2            | -            | GND | microcontroller ground current                   |
| 3            | LED          | 6   | information flow between LED and microcontroller |
| 4            | LED          | -   | LED ground current                               |
| 5            | power supply | -   | 5V current source                                |
| 6            | power supply | +   | ground current source                            |
| 7            | joystick     | -   | serves joystick with power                       |
| 8            | joystick     | +   | joystick ground current                          |
| 9            | joystick     | A0  | joystick x                                       |
| 10           | joystick     | A1  | joystick y                                       |
| 11           | joystick     | A3  | joystick trigger                                 |
| 12           | joystick     | A4  | joystick buttons                                 |

+: refers to the 5V line on the breadboard <br>
-: refers to the common ground line on the breadboard

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