# 🦯 Smart Cane for the Visually Impaired

This project is a **Smart Cane** designed to assist **visually impaired individuals** in navigating safely. It uses an **IR sensor** to detect **stairs/drops** and an **Ultrasonic sensor** to detect **obstacles ahead**. Two buzzers provide **audio feedback** to alert the user of potential hazards.

---

## 🚀 Features
- **Stair Detection (IR Sensor)**: Alerts the user when stairs or sudden drops are detected.  
- **Obstacle Detection (Ultrasonic Sensor)**: Detects obstacles in front within 50 cm.  
- **Dual Buzzers**:  
  - One buzzer alerts for **stairs**.  
  - Another buzzer alerts for **obstacles**.  
- **Serial Monitor Feedback** (for testing & debugging).  

---

## 🛠️ Components Required
- Arduino UNO (or compatible board)  
- **IR Sensor** (for stair detection)  
- **Ultrasonic Sensor** (HC-SR04 for obstacle detection)  
- 2 × **Buzzers** (audio alerts)  
- Breadboard & jumper wires  
- Battery pack / power source  
- Walking cane (to integrate the system into)  

---

## ⚡ Circuit Connections
| Component              | Arduino Pin |
|------------------------|-------------|
| IR Sensor OUT          | A0          |
| Ultrasonic Trig        | D10         |
| Ultrasonic Echo        | D9          |
| Buzzer (Obstacle)      | D2          |
| Buzzer (Stair)         | D3          |
| VCC (Sensors + Buzzers)| 5V          |
| GND (All components)   | GND         |

---

## 📜 How It Works
1. **IR Sensor (Stairs/Drop Detection)**  
   - If IR reading ≥ 50 → `"No Stair"` (safe).  
   - If IR reading ≤ 100 → `"Alert... Stair Ahead"` → Buzzer ON.  

2. **Ultrasonic Sensor (Obstacle Detection)**  
   - Measures distance to obstacles.  
   - If distance ≤ 50 cm → `"Alert!!!! Obstacle Ahead"` → Buzzer ON.  
   - If distance > 50 cm → `"Safe"` → Buzzer OFF.  

3. **Audio Alerts**  
   - Stair alert and obstacle alert use **separate buzzers**, ensuring the user can distinguish between them.  

---

## ▶️ Usage
1. Upload the code to your Arduino using the Arduino IDE.  
2. Assemble the sensors and buzzers onto the cane.  
3. Power the system with a portable battery.  
4. Walk with the cane:  
   - If a stair/drop is ahead → Stair Buzzer sounds.  
   - If an obstacle is ahead → Obstacle Buzzer sounds.  

---

## 📸 Example Serial Monitor Output
- No Stair
- Safe
- Alert... Stair Ahead
- Alert!!!! Obstacle Ahead
