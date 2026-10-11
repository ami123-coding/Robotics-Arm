// Robotic Arm Firmware
// Initial test program for Hack Club Fabricate project

#include <Arduino.h>

// Servo IDs
const int BASE_SERVO = 1;
const int SHOULDER_SERVO = 2;
const int ELBOW_SERVO = 3;
const int WRIST_SERVO = 4;
const int CLAW_ROTATION_SERVO = 5;
const int CLAW_SERVO = 6;

void setup() {
  Serial.begin(115200);

  Serial.println("Robotic arm controller starting...");
  Serial.println("Servo bus initialization will be added here.");
}

void loop() {
  // Future functions:
  // - Initialize Waveshare servo bus
  // - Move each servo by ID
  // - Read servo position feedback
  // - Control arm from joystick or serial commands
  // - Add safety limits for each joint

  delay(1000);
}
