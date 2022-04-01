# Luna65
Named for my love for space exploration and my participation in Carnegie Mellon University's MoonRanger project, Luna65 is my first PCB project - a 65% keyboard!

## Features
* 65% Layout
* Hotswap switch sockets
* Bluetooth Connectivity
* South-facing RGB LEDs
* USB-C daughter-board to enable gasket-mounted case design
* QMK Support

## Schematics

![Daughter Board Schematic](https://user-images.githubusercontent.com/32021246/161196672-f882e6dd-4c01-4170-bd2d-14b6a5129ab0.png)
![Main Board Schematic](https://user-images.githubusercontent.com/32021246/161196771-b9d83604-f70e-480c-812f-65376fab62b2.png)

## Renders

### USB-C Daughter Board
<img src="https://i.imgur.com/FhxFyNi.jpg" alt="USB-C Daughter Board" width="500"/>

### Keyboard PCB
Coming Soon

### Case
Coming Soon

### Disclaimer
This is very much a WIP project which means there will be issues and incomplete features - especially on the software side. This is my first hardware project
and I do not claim to be an expert in the field. While physical versions of the PCB have been tested and are known to work, I do not promise that my implementation
is perfect. For example, the Atmega32u4 microprocessor used in this project does not have sufficient GPIO to enable a clean 5 row x 15 column matrix standard for 65%
keyboards. As such the keys are laid out in an unconventional (and definitely ugly) 6x12 matrix. I do not intend to improve or fix this.

TL;DR This project is provided as is. You are free to use it however you like but I have no intention to polish it into a complete ready-to-ship product. Functionality
may be added or removed at any moment and the project will be abandoned whenever I get too bored to carry on.
(Do, let me know if you actually get some boards made - that'd be sickkkkk!)
