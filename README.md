# Automatic-Closet-Light
Make automatic light in closet when opened.

## Used technologies
ATmega 328P <br>
2x reed openers (for checking whether the closet is open or not) <br>
3x 1.5V AA Batteries <br>
LED tape <br>
Resistors (2x 10 kOhm and 1x 220 Ohm) <br>
Capacitor (100 nF) <br>

## How it works?
Code checks if Reed openers is open or closed. When at least one Reed opener is at the open state, then it sends signal to LED tape (with max delay 100ms).

## Connections scheme
3x 1.5 AA Batteries need to be connected to VCC and GND. Between VCC and GND put capacitor. <br>
Both Reed openers need to be connected to GND, and one need to be connected to PD1 and second to PD2. Put 2 resistors (10 kOhm) between PD1-VCC and PD2-VCC.

Next, connect LED Tape to PB0 through 220 Ohm resistor and to GND.

Now it's up to you to put it into the closet, and make it work!

### License
This project is under **MIT License**

Copyright (c) [2025] [milosz0542]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
