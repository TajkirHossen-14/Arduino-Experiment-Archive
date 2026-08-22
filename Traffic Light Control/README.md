<div align ='center'>

# 🚦 Traffic Light Control Using Servo Motor and LEDs

</div>

## 📌 Overview

This experiment demonstrates a simple traffic light control system using an **Arduino, 3 LEDs, and a Servo Motor**. The Red, Yellow, and Green LEDs operate sequentially, while the servo motor moves to different positions according to the active traffic signal.

## 🎯 Objective

- To implement a basic traffic light control system using Arduino.
- To control Red, Yellow, and Green LEDs in a sequential manner.
- To control the position of a servo motor according to different traffic light conditions.
- To understand the practical interfacing of LEDs and a servo motor with Arduino.

## Apparatus

### 🧰 Hardware Requirements

- Arduino Uno
- Servo Motor
- Breadboard
- LEDs (Red, Yellow, Green)
- Resistors (220Ω–330Ω)
- Jumper Wires
- USB Cable
- Power Supply

### 💻 Software Requirements

- Arduino IDE
- Arduino Programming Language (C/C++)

## 🔌 Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| 🔴 Red LED | D7 |
| 🟡 Yellow LED | D6 |
| 🟢 Green LED | D5 |
| ⚙️ Servo Signal | D0 |

> **Note:** The servo signal pin is connected to **D0** according to the practical circuit setup.

## 📷 Circuit Diagram

![Traffic Light Control Circuit](Circuit_Diagram.png)

## Code

[See Here](Traffic_Light_Control.ino)

## ⚙️ Working Principle

The system operates through a continuous traffic light sequence:

1. **Red Light**
   - Red LED turns ON.
   - Servo motor moves to **90°**.
   - Duration: **2 seconds**

2. **Yellow Light**
   - Yellow LED turns ON.
   - Servo motor moves to **45°**.
   - Duration: **1 second**

3. **Green Light**
   - Green LED turns ON.
   - Servo motor moves to **0°**.
   - Duration: **2 seconds**

After completing the sequence, the system repeats the cycle continuously.

## 📊 Output / Observation

- When the **Red LED is ON**, the servo motor moves to **90°**, indicating a stop signal.
- When the **Yellow LED is ON**, the servo motor moves to **45°**, acting as a warning signal.
- When the **Green LED is ON**, the servo motor rotates to **0°**, indicating a go signal.
- The **Red → Yellow → Green** sequence repeats continuously, demonstrating a simple automated traffic light control system.

## 📁 Project Files

```text
Traffic Light Control/
│
├── Traffic-Light-Control.ino
├── Circuit Diagram.png
└── README.md 
