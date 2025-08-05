// Automatic Car Parking Toll Gate System
// Welcome to RR Techs

#include <Servo.h>

Servo tap_servo;

const int sensor_pin = 7;       // IR sensor input pin
const int tap_servo_pin = 9;    // Servo motor control pin

int val;

void setup() {
  pinMode(sensor_pin, INPUT);
  tap_servo.attach(tap_servo_pin);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(sensor_pin);
  Serial.println(val);

  if (val == LOW) { // Object detected
    tap_servo.write(0);       // Open gate
    delay(2000);              // Wait for vehicle to pass
    tap_servo.write(90);      // Close gate
  } else if (val == HIGH) { // No object
    tap_servo.write(90);      // Keep gate closed
  }
}
