# 🚀 Underground Cable Fault Distance Detection System

An Arduino Uno-based embedded system designed to detect and locate faults in underground power cables using voltage-drop analysis and Ohm's Law. The system identifies the faulted phase and displays the fault distance in real time on a 16×2 LCD.

## 📌 Project Overview

Locating faults in underground power cables is a challenging and time-consuming task. This project provides a low-cost solution that detects the fault location from the base station without excavating the entire cable path.

The system uses a resistor network to simulate cable lengths. When a fault occurs, the voltage across the network changes. The Arduino Uno reads this voltage using its built-in ADC and calculates the fault distance.

## 🎯 Objectives

- Detect underground cable faults accurately
- Identify the faulted phase (R, Y, B)
- Display fault distance in kilometers
- Reduce maintenance time and troubleshooting effort

## ⚙️ Components Used

- Arduino Uno (ATmega328P)
- 16×2 LCD Display
- 4-Channel Relay Module
- Fault Sensing Circuit
- 1kΩ Resistors
- Switches
- 5V Power Supply

## 🔧 Working Principle

The system operates based on Ohm's Law.

1. A resistor network represents underground cable length.
2. Faults are created using switches at predefined distances.
3. Voltage changes due to faults are sensed by the circuit.
4. Arduino reads the voltage using its ADC.
5. The controller calculates the fault distance.
6. Distance and faulted phase are displayed on the LCD.

## 🛠️ Features

- Real-time fault detection
- Fault distance indication in kilometers
- Phase identification (R, Y, B)
- LCD-based monitoring system
- Low-cost and easy-to-implement design
- Hardware prototype implementation

## 📊 Results

The system successfully detected faults at:

- 2 KM
- 4 KM
- 6 KM
- 8 KM

The LCD accurately displayed both the fault distance and the affected phase.

## 💻 Technologies Used

- Embedded C
- Arduino IDE
- Arduino Uno
- ATmega328P
- Analog-to-Digital Conversion (ADC)
- Electronics & Circuit Design

## 📷 Project Images

Add project images in the images folder:

- Hardware Model
- Circuit Diagram
- LCD Output Screens
- Fault Sensing Module

## 📁 Project Structure

Underground-Cable-Fault-Detection/
│
├── README.md
├── code/
│ └── Underground_Cable_Fault_Detector.ino
├── report/
│ └── Project_Report_Final.pdf
└── images/
├── hardware_model.jpg
├── circuit_diagram.jpg
├── lcd_output_6km.jpg
└── lcd_output_8km.jpg

## 🚀 Future Enhancements

- IoT-based fault monitoring
- GSM/SMS fault alerts
- GPS-based fault location mapping
- Web dashboard for remote monitoring
- Cloud-based data logging

## 👨‍💻 Author

**Dhiraj Pardhi**

Electrical Engineering Graduate | Embedded Systems Enthusiast

### Connect With Me

- GitHub: https://github.com/DhirajPardhi
- LinkedIn: Add LinkedIn Profile Link

## ⭐ Project Highlights

- Arduino-based Embedded System
- Practical Fault Detection Application
- Real-Time Monitoring
- Hardware Prototype Development
- Electrical Power System Application

If this project helped or inspired you, consider giving it a ⭐ on GitHub!

#Arduino #EmbeddedSystems #ElectricalEngineering #ArduinoUno #ATmega328P #FaultDetection #PowerSystems #EmbeddedC #Electronics #EngineeringProject# DhirajPardhi-Embedded-Projects