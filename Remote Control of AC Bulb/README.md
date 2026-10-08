<div align='center'>

# 💡 Remote Control of AC Bulb

</div>

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📌 Overview

This experiment demonstrates a **remote-controlled AC bulb system** using an **Arduino, IR receiver, IR remote, and relay module**. The IR receiver receives commands from the remote, and the Arduino processes the received signal to control the relay. The relay switches the AC bulb **ON or OFF** according to the remote command.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🎯 Objective

- To design and implement a remote-controlled AC bulb system using Arduino.
- To receive wireless commands using an IR receiver and remote.
- To control an AC bulb through a relay module.
- To understand the practical interfacing of IR communication and relay-based switching.
- To control electrical loads remotely using a microcontroller.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 🧰 Apparatus

### 🛠️ Hardware Requirements

- Arduino Uno
- IR Remote
- IR Receiver
- Relay Module
- AC Bulb
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
| 📡 IR Receiver | Signal → D7, VCC → 5V, GND → GND |
| 🔌 Relay Module | Signal → D3, VCC → 5V, GND → GND |
| 💡 AC Bulb | Connected through Relay Module |

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📷 Circuit Diagram

![Remote Control of AC Bulb](Circuit_Diagram.png)

🔗 **[View Live Simulation on Tinkercad](YOUR_TINKERCAD_LINK)**

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## </> Source Code

The Arduino source code for this experiment is available in the [`Remote_AC_Bulb_Control.ino`](Remote_AC_Bulb_Control.ino) file included in this folder.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## ⚙️ Working Principle

The IR receiver continuously waits for a signal from the IR remote. When a button is pressed, the receiver sends the corresponding IR command to the Arduino. The Arduino reads the received command and compares it with the predefined remote codes.

- When the **ON command** is received, the relay is activated and the AC bulb turns **ON**.
- When the **OFF command** is received, the relay is deactivated and the AC bulb turns **OFF**.
- The system continuously waits for new commands from the IR remote and changes the bulb state accordingly.

<img width="100%" src="https://capsule-render.vercel.app/api?type=rect&color=316e99&height=2&section=header"/>

## 📁 Project Files

```text
Remote Control of AC Bulb/
│
├── Remote_AC_Bulb_Control.ino
├── Circuit_Diagram.png
└── README.md
