# 🏫 IoT-Based Smart Laboratory Automation System Using Blynk

![ESP32](https://img.shields.io/badge/ESP32-blue)
![Arduino IDE](https://img.shields.io/badge/Arduino_IDE-00979D?logo=arduino&logoColor=white)
![Blynk](https://img.shields.io/badge/Blynk-Platform-23C48E)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

An ESP32-based IoT Smart Laboratory Automation System designed to remotely monitor and control laboratory electrical appliances using the **Blynk IoT Platform**. The system provides individual as well as centralized control of lights and fans across multiple laboratory zones, improving operational efficiency and energy management.

---

## 📖 Project Overview

Traditional laboratories require manual operation of electrical appliances, leading to unnecessary power consumption and reduced convenience. This project introduces an IoT-enabled automation system that allows users to control laboratory lights and fans from anywhere using the Blynk mobile application.

The system is built around the ESP32 microcontroller, which connects to the internet via Wi-Fi and communicates with the Blynk Cloud for real-time appliance control.

---

## ✨ Features

- Remote control using the Blynk IoT App
- Individual control of each laboratory zone
- Control of 4 Lights and 4 Fans
- Master switch for all lights
- Master switch for all fans
- Wi-Fi-based communication
- Real-time switching
- ESP32-based implementation
- Active LOW relay support
- Scalable design for additional zones

---

## 🛠 Hardware Used

- ESP32 Development Board
- 8-Channel Relay Module
- Wi-Fi Network
- Blynk IoT Platform
- Power Supply
- Connecting Wires
- Laboratory Lighting and Fan Loads

---

## 💻 Software Used

- Arduino IDE
- Blynk IoT
- ESP32 Board Package
- Embedded C++
- 
## ⚙️ Working Principle

1. ESP32 connects to the Wi-Fi network.
2. The ESP32 establishes communication with the Blynk Cloud.
3. Users control laboratory appliances through the Blynk mobile application.
4. Commands are transmitted to the ESP32 in real time.
5. The ESP32 activates or deactivates the corresponding relay.
6. The relay switches the connected light or fan ON/OFF.
7. Users can control individual appliances or operate all lights and all fans simultaneously using master controls.

---

## 🔌 Pin Configuration

| Device | GPIO Pin |
|---------|----------|
| Light 1 | GPIO 13 |
| Fan 1 | GPIO 18 |
| Light 2 | GPIO 19 |
| Fan 2 | GPIO 27 |
| Light 3 | GPIO 26 |
| Fan 3 | GPIO 25 |
| Light 4 | GPIO 33 |
| Fan 4 | GPIO 32 |

---

## 📱 Blynk Virtual Pins

| Virtual Pin | Function |
|--------------|----------|
| V0 | Light 1 |
| V1 | Fan 1 |
| V2 | Light 2 |
| V3 | Fan 2 |
| V4 | Light 3 |
| V5 | Fan 3 |
| V6 | Light 4 |
| V7 | Fan 4 |
| V8 | Master Control - All Lights |
| V9 | Master Control - All Fans |

---

## 📸 Project Images

### Hardware Setup

> Add your hardware setup image here.

```
Images/Hardware_Setup.jpg
```

---

### Blynk Dashboard

> Add a screenshot of your Blynk dashboard.

```
Images/Blynk_Dashboard.jpg
```

---

### Circuit Diagram

> Add the circuit diagram of the project.

```
Circuit_Diagram/Circuit.pdf
```
---

## 🚀 Installation

1. Clone this repository.

```bash
git clone https://github.com/your-username/Smart-Lab-Automation-Using-Blynk.git
```

2. Open the project in Arduino IDE.

3. Install the required libraries:
   - Blynk
   - ESP32 Board Package

4. Update the following credentials:

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

5. Select your ESP32 board and upload the code.

6. Open the Blynk app and start controlling the laboratory appliances.

---

## 📂 Project Structure

```
Smart-Lab-Automation-Using-Blynk
│
├── Code
│   └── ESP32_Smart_Laboratory_Automation.ino
│
├── Images
│   ├── Hardware_Setup.jpg
│   ├── Blynk_Dashboard.jpg
│   └── Working.jpg
│
├── Circuit_Diagram
│   └── Circuit.pdf
│
├── Documents
│   └── Project_Report.pdf
│
└── README.md
```

---

## 🎯 Applications

- Smart Laboratories
- Educational Institutions
- Research Laboratories
- Smart Classrooms
- Industrial Training Labs
- Energy Management Systems

---

## 🔮 Future Enhancements

- Occupancy-based automatic control
- Energy consumption monitoring
- Voice assistant integration
- Mobile notifications
- Cloud-based data logging
- AI-powered energy optimization

---

## 👨‍💻 Developed By

**Swastik Shewatkar**

Electronics & Telecommunication Engineering

MGICOET, Shegaon

GitHub: https://github.com/Swastik-shewatkar

LinkedIn: https://linkedin.com/in/swastik-shewatkar-511bab317

---

## 📌 Note

This repository is intended for educational and portfolio purposes.

---

## 👨‍💻 Author

**Swastik Shewatkar**

Electronics & Telecommunication Engineering Student

📧 Email: shewatkarswastik28@gmail.com

🔗 LinkedIn: https://linkedin.com/in/swastik-shewatkar-511bab317

💻 GitHub: https://github.com/Swastik-shewatkar
