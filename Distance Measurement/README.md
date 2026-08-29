<div align='center'>

# 📏 Distance Measurement Using Ultrasonic Sensor, LCD, LEDs and Servo Motor

</div>

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📌 Overview

This experiment demonstrates a simple distance measurement and indication system using an **Arduino, HC-SR04 Ultrasonic Sensor, LCD, LEDs, and a Servo Motor**. The ultrasonic sensor measures the distance of an object, and the measured distance is displayed on the LCD. The system also responds according to different distance ranges by controlling the LEDs and servo motor.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🎯 Objective

- To measure the distance of an object using an ultrasonic sensor.
- To display the measured distance on an LCD.
- To indicate different distance ranges using Red, Yellow, and Green LEDs.
- To control the position of a servo motor based on the measured distance.
- To understand the practical interfacing of sensors, displays, and actuators with Arduino.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🧰 Apparatus 

### 🛠️ Hardware Requirements

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16×2 I2C LCD
- LEDs (Red, Yellow, Green)
- Servo Motor
- Breadboard
- Resistors (220Ω–330Ω)
- Jumper Wires
- USB Cable
- Power Supply

### 💻 Software Requirements

- Arduino IDE
- Simulation Tool (Tinkercad / Wokwi)
- Arduino Programming Language (C/C++)

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🔌 Pin Configuration

| Component | Connection |
|-----------|------------|
| 🔴 Red LED | Anode → D7 through 220Ω–330Ω resistor, Cathode → GND |
| 🟡 Yellow LED | Anode → D6 through 220Ω–330Ω resistor, Cathode → GND |
| 🟢 Green LED | Anode → D5 through 220Ω–330Ω resistor, Cathode → GND |
| 📡 HC-SR04 Trig | D12 |
| 📡 HC-SR04 Echo | D11 |
| ⚙️ Servo Motor | Signal → D1, VCC → 5V, GND → GND |
| 📟 LCD (I2C) | SDA → A4, SCL → A5, VCC → 5V, GND → GND |
| 🔋 Arduino Power | 5V → Positive Rail, GND → Ground Rail |

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📷 Circuit Diagram

![Distance Measurement Circuit](Circuit_Diagram.png)

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## </> Source Code

The Arduino source code for this experiment is available in the [`Distance-Measurement.ino`](Distance-Measurement.ino) file included in this folder.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## ⚙️ Working Principle

The HC-SR04 ultrasonic sensor sends an ultrasonic pulse and receives its reflected signal. The time taken for the signal to return is used to calculate the distance of the object.

The measured distance is displayed on the **16×2 I2C LCD** in centimeters.

The system then responds according to the measured distance:

- **Distance < 50 cm:** Red LED turns ON and the servo moves to **90°**.
- **Distance 50–100 cm:** Yellow LED turns ON and the servo moves to **45°**.
- **Distance ≥ 100 cm:** Green LED turns ON and the servo moves to **0°**.

The distance is continuously measured, displayed on the LCD, and used to update the corresponding LED and servo position.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📁 Project Files

```text
Distance Measurement/
│
├── Distance-Measurement.ino
├── Circuit Diagram.png
└── README.md
