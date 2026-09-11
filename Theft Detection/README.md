<div align='center'>

# 🚨 Theft Detection Using PIR Sensor and Buzzer

</div>

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📌 Overview

This experiment demonstrates a simple **theft detection system** using **Arduino, PIR motion sensor, buzzer, LED, servo motor, and 16×2 I2C LCD**. The PIR sensor is used to detect movement within its sensing range. When motion is detected, the system activates the buzzer and LED, moves the servo motor, and displays an alert message on the LCD.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🎯 Objective

- To design and implement a simple theft detection system using Arduino.
- To detect movement using a PIR motion sensor.
- To activate a buzzer and LED as audible and visual alerts.
- To control a servo motor in response to detected motion.
- To display the system status on a 16×2 I2C LCD.
- To understand the basic concept of intrusion detection and alarm systems.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🧰 Apparatus

### 🛠️ Hardware Requirements

- Arduino Uno
- PIR Motion Sensor
- Piezo Buzzer
- LED
- Servo Motor
- 16×2 I2C LCD
- Breadboard
- Jumper Wires
- USB Cable
- Power Supply

### 💻 Software Requirements

- Arduino IDE
- Simulation Tool (Tinkercad / Wokwi)

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🔌 Pin Configuration

| Component | Connection |
|-----------|------------|
| 🕵️ PIR Sensor | Signal → D4, VCC → 5V, GND → GND |
| 🔊 Piezo Buzzer | Positive → D11, Negative → GND |
| 💡 LED | Anode → D5, Cathode → GND |
| ⚙️ Servo Motor | Signal → D2, VCC → 5V, GND → GND |
| 🖥️ 16×2 I2C LCD | SDA → A4, SCL → A5, VCC → 5V, GND → GND |
| 🔋 Arduino Power | 5V → Positive Rail, GND → Ground Rail |

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📷 Circuit Diagram

![Wireless Theft Detection](Circuit_Diagram.png)

🔗 **[View Live Simulation on Tinkercad](https://www.tinkercad.com/things/cgmLMOmq4hP-theft-detection-using-pir-sensor-and-buzzer)**

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## </> Source Code

The Arduino source code for this experiment is available in the [`Wireless-Theft-Detection.ino`](Theft_Detection.ino) file included in this folder.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## ⚙️ Working Principle

The PIR motion sensor continuously monitors its sensing area for movement. The Arduino reads the sensor output and controls the buzzer, LED, servo motor, and LCD according to the detected motion.

- When **no motion is detected**, the buzzer and LED remain **OFF**, the servo motor stays at **0°**, and the LCD displays **"SYSTEM SAFE"** and **"Monitoring..."**.
- When an object moves within the **PIR sensor's sensing range**, motion is detected.
- The buzzer produces a **2000 Hz tone**, the LED turns **ON**, and the servo motor rotates to **90°**.
- The LCD displays **"MOTION DETECTED"** and **"ALERT!"** to indicate a possible security threat.
- The system continuously monitors the sensing area and responds automatically to detected movement.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📁 Project Files

```text
Theft Detection/
│
├── Wireless-Theft-Detection.ino
├── Circuit_Diagram.png
└── README.md
