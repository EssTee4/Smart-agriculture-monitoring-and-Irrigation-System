Smart Agriculture Monitoring & Irrigation System 🌱
An IoT-driven solution for automated field monitoring and precision irrigation using microcontrollers and sensors. Designed for small-to-medium farms to optimize water use and improve crop health.

Table of Contents
Overview

Features

Architecture

Hardware Requirements

Software Requirements

Usage

Troubleshooting

Overview
This project automates soil monitoring and irrigation control. It integrates soil moisture, temperature, and humidity sensors with a microcontroller and relay system to water crops only when needed—saving water and promoting healthier plants.

Features
Real-time soil moisture, temperature, and humidity monitoring

Automated drip or flood irrigation via relay control

Customizable thresholds to suit different crop needs

Remote data visualization (via dashboard or app)

Modular design for expanding sensor network and zones


Hardware Requirements
Microcontroller: ESP32, ESP8266, or Arduino Uno

Soil Moisture Sensor (e.g., YL-69/FC-28)

Temp & Humidity Sensor (e.g., DHT11, DHT22)

Relay Module (to control pump or valves)

Power Supply: 5 V DC for sensors, 3.3 V for ESP modules

Jumper wires, breadboard or PCB

Software Requirements
Arduino IDE

Usage
Live Monitoring: View sensor data and irrigation status on the dashboard.

Automatic Irrigation: Watering triggers when soil moisture falls below the threshold; pump turns off once optimal levels are reached.

Logging: Each event and sensor reading is logged for trend analysis.


Troubleshooting

Wrong sensor readings: Verify wiring, analog/digital calibration.

Relay issues: Ensure correct power supply and GPIO assignments.