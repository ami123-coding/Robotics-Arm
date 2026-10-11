# Robotics-Arm
A robotic arm 5 axis, rotating claw, strong grip, controlled via arduino
# Robotic Arm

This project is a compact 3D-printed robotic arm designed for Hack Club Fabricate.

The arm is designed to have approximately 1 foot of reach and lift objects weighing up to around 2 lb. The structure is primarily 3D printed and uses direct-drive smart servos for movement.

## Features

- Rotating arm base
- Shoulder joint
- Elbow joint
- Wrist movement
- Custom mechanical claw
- Single-servo claw actuation
- Smart servo bus control
- 3D printed structure
- Designed in Onshape

## Design

The robotic arm was designed in Onshape. My goal was to make the arm compact while still giving it enough strength and range of motion to manipulate useful objects.

The base of the robot remains stationary while the arm assembly rotates above it.

The arm uses multiple servo-driven joints. Higher-torque servos are used for the main arm joints, while smaller servos are used toward the end of the arm to reduce weight.

One of the main custom mechanisms is the claw. Instead of using a separate servo for every finger, I designed a mechanical system that allows a single servo to operate the claw.

## CAD

The complete robotic arm assembly was designed in Onshape.

The exported STEP assembly and other CAD files can be found in the `CAD` folder.

## Electronics

The robot uses smart servos connected through a servo bus so that each servo can be individually controlled while sharing the same communication system.

Electronics and wiring information can be found in the `wiring` folder.

## Firmware

Firmware for controlling the robotic arm can be found in the `firmware` folder.

## Bill of Materials

The complete bill of materials, including prices and purchase links, is available in `BOM.csv`.

## Build Journal

The design and development process is documented in `JOURNAL.md`.
