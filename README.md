# Automatic-car-parking-toll-gate-system

# 🚗 Automatic Car Parking Toll Gate System

Welcome to RR Techs! This project demonstrates a simple automatic toll gate system using an IR sensor and a servo motor. When a car approaches the gate, the IR sensor detects it and opens the gate automatically. After a short delay, the gate closes again.

## 🔧 Hardware Requirements

- Arduino Uno (or compatible board)
- IR Sensor Module
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard (optional)
- Power Supply or USB Cable

## 🧠 How It Works

1. The IR sensor detects the presence of a vehicle.
2. When a vehicle is detected (`sensor_pin` reads LOW), the servo rotates to open the gate.
3. After a 2-second delay, the servo rotates back to close the gate.
4. If no vehicle is detected (`sensor_pin` reads HIGH), the gate remains closed.

## 📄 Code Overview

- `sensor_pin`: Digital pin connected to the IR sensor output.
- `tap_servo_pin`: Digital pin connected to the servo motor signal wire.
- `tap_servo.write(angle)`: Controls the servo position.
  - `0°`: Gate open
  - `90°`: Gate closed

## 🚀 Getting Started

1. Connect the IR sensor output to pin 7.
2. Connect the servo signal wire to pin 9.
3. Upload the code to your Arduino board.
4. Open the Serial Monitor to view sensor readings.

## 🛠️ Customization

- Adjust the `delay(2000)` to change how long the gate stays open.
- Modify servo angles if your mechanical setup requires different positions.

## 📢 Notes

- Ensure your servo motor is powered adequately to avoid jittering.
- Use external power if needed for servo stability.

## 📷 
 
![Image](https://github.com/user-attachments/assets/23fd2ab5-7d7b-402e-a792-4dc3f28f4c7d)

---

Agafia Student Project. Made with ❤️ 
