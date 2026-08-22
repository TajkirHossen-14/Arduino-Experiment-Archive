<div align='center'>

# 📏 Distance Measurement Using Ultrasonic Sensor, LEDs and Servo Motor

</div>

## 📌 Overview

This experiment demonstrates a simple distance measurement and indication system using an **Arduino, HC-SR04 Ultrasonic Sensor, LEDs, and a Servo Motor**. The ultrasonic sensor measures the distance of an object, and the system responds according to different distance ranges by controlling the LEDs and servo motor.

## 🎯 Objective

- To measure the distance of an object using an ultrasonic sensor.
- To indicate different distance ranges using Red, Yellow, and Green LEDs.
- To control the position of a servo motor based on the measured distance.
- To understand the practical interfacing of sensors and actuators with Arduino.

## 🧰 Apparatus 

### 🛠️ Hardware Requirements

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Breadboard
- LEDs (Red, Yellow, Green)
- Resistors (220Ω–330Ω)
- Jumper Wires
- USB Cable
- Power Supply

### 💻 Software Requirements

- Arduino IDE
- Simulation Tool (Tinkercad / Wokwi)
- Arduino Programming Language (C/C++)

## 🔌 Pin Configuration

| Component | Connection |
|-----------|------------|
| 🔴 Red LED | Anode → D10 through 220Ω–330Ω resistor, Cathode → GND |
| 🟡 Yellow LED | Anode → D9 through 220Ω–330Ω resistor, Cathode → GND |
| 🟢 Green LED | Anode → D8 through 220Ω–330Ω resistor, Cathode → GND |
| 📡 HC-SR04 Trig | D7 |
| 📡 HC-SR04 Echo | D6 |
| ⚙️ Servo Motor | Signal → D11, VCC → 5V, GND → GND |
| 🔋 Arduino Power | 5V → Positive Rail, GND → Ground Rail |

## ⚙️ Working Principle

The HC-SR04 ultrasonic sensor sends an ultrasonic pulse and receives its reflected signal. The time taken for the signal to return is used to calculate the distance of the object.

The system then responds according to the measured distance:

- **Distance < 50 cm:** Red LED turns ON and the servo moves to **90°**.
- **Distance 50–100 cm:** Yellow LED turns ON and the servo moves to **45°**.
- **Distance ≥ 100 cm:** Green LED turns ON and the servo moves to **0°**.

The distance is continuously measured, and the corresponding LED and servo position are updated accordingly.

## 📊 Output / Observation

- The ultrasonic sensor detects the distance of an object by transmitting and receiving ultrasonic waves.
- When the detected distance is **less than 50 cm**, the **Red LED** turns ON and the servo motor moves to **90°**.
- When the distance is between **50 cm and 100 cm**, the **Yellow LED** turns ON and the servo motor moves to **45°**.
- When the detected distance is **100 cm or more**, the **Green LED** turns ON and the servo motor rotates to **0°**.
- During the initial implementation, some **inconsistent sensor readings and hardware-related issues** were observed. After checking the connections and making the necessary adjustments, the system responded according to the measured distance.

## 📷 Circuit Diagram

![Distance Measurement Circuit](circuit-diagram.png)


## </> Source Code

The Arduino source code for this experiment is available in the `[.ino](Distance-Measurement.ino)` file included in this folder.

## 📁 Project Files

```text
Distance Measurement/
│
├── Distance-Measurement.ino
├── Circuit Diagram.png 
└── README.md
