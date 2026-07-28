# DC Motors Simulation

A simulation of four DC motors controlled by an Arduino Uno and an L293D motor driver. The motors execute a continuous, predefined movement sequence.

Simulation link: https://www.tinkercad.com/things/9YzaDJvx52C-4-dc-motors?sharecode=bG6XZ__5_dcrCEiSvb6c_1OjOyNSDhffkEg2vQMxtNQ

## Working Principle

The four DC motors operate synchronously in a repeating sequence:

1. Move **forward** for **30 seconds**.
2. Move **backward** for **60 seconds**.
3. Alternate between **right** and **left** turns for **60 seconds**, with each turn lasting **5 seconds**.

After completing the sequence, the cycle repeats indefinitely.

## Components

- Arduino Uno R3
- 4 × DC Motors
- L293D Motor Driver IC
- 9V Battery

## Circuit Diagram

<p align="center">
  <img src="Circuit Diagram.png" alt="Circuit Diagram" width="700">
</p>

## Circuit Connections

| L293D Pin | Connection |
|-----------|------------|
| VCC1 | Arduino 5V |
| VCC2 | 9V Battery |
| IN1 | Arduino Pin 5 |
| IN2 | Arduino Pin 4 |
| EN1 | Arduino Pin 3 |
| IN3 | Arduino Pin 8 |
| IN4 | Arduino Pin 7 |
| EN2 | Arduino Pin 9 |
| OUT1 | Rear Left & Front Left Motors (Terminal 2) |
| OUT2 | Rear Left & Front Left Motors (Terminal 1) |
| OUT3 | Rear Right & Front Right Motors (Terminal 2) |
| OUT4 | Rear Right & Front Right Motors (Terminal 1) |
| GND | Common ground shared by the Arduino, L293D, and battery |
