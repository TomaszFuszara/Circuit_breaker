# Circuit Breaker

This project is a simple AVR-based circuit breaker designed to assist in automotive testing scenarios where precise and fast toggling of power (below 300ns) is required. 

## Features

- **Power control** to the device under test using transistors.
- **Manual toggle** using a physical button.
- **Two LEDs** indicate current state:
  - **Green LED**: Power is ON (transistors active)
  - **Red LED**: Power is OFF (transistors disabled)
- **Debouncing** implemented via a software delay.
- **Compact code** suitable for ATmega328 and similar microcontrollers.

## Use Case

Some automotive test scenarios require rapid and repeated power cycling. This device makes it easier to manage that process safely and repeatedly.
