# RGB Project with Arduino

## Overview
This project demonstrates how to control an RGB LED using an Arduino Uno and three potentiometers. By adjusting the potentiometers, you can change the color of the LED.

## Components
- **Arduino Uno R3 (U2)**: The main microcontroller board.
- **10 kΩ Potentiometers (Rpot1, Rpot2, Rpot3)**: These three potentiometers allow you to adjust the red, green, and blue components of the LED color.
- **RGB LED (D1)**: The LED that emits different colors based on the combination of red, green, and blue light.
- **220 Ω Resistors (R1, R2, R3)**: These resistors limit the current flowing through the RGB LED.

## Wiring
1. Connect the three potentiometers to analog pins on the Arduino (e.g., A0, A1, A2).
2. Connect the RGB LED's red, green, and blue pins to digital pins (e.g., D9, D10, D11) via the 220 Ω resistors.
3. Connect the common cathode (ground) of the RGB LED to the Arduino's ground (GND) pin.
