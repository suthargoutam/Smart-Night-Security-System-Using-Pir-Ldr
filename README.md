# 🏠 Smart Night Security System using LDR and PIR Sensor

## 🔍 Overview
The **Smart Night Security System** is an automated security project designed to detect motion only during night-time using an **LDR (Light Dependent Resistor)** and a **PIR (Passive Infrared) Sensor**.  
When it becomes dark (LDR value < 50), the **PIR sensor** is activated. If motion is detected, the **red LED** and **buzzer** turn **ON** as an alert signal, otherwise, the **green LED** stays **ON** to indicate system standby mode.

---

## ⚙️ Working Principle
- **LDR Sensor:** Detects light intensity to determine day or night.  
- **PIR Sensor:** Detects human or animal motion through infrared radiation.  
- **Buzzer:** Sounds an alarm when motion is detected at night.  
- **Red LED:** Indicates motion detected (alert mode).  
- **Green LED:** Indicates system is active and no motion detected.  

### 🧠 Logic Flow:
1. **Daytime:**  
   - LDR value ≥ 50 → It’s bright → PIR sensor is **inactive**.  
   - **Green LED OFF**, **Red LED OFF**, **Buzzer OFF**.  

2. **Nighttime:**  
   - LDR value < 50 → It’s dark → PIR sensor becomes **active**.  
   - If **motion detected** → **Red LED ON** and **Buzzer ON**.  
   - If **no motion** → **Green LED ON** (system ready).  

---

## 🔩 Components Used
| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino Uno / NodeMCU | 1 | Microcontroller for control logic |
| LDR Sensor | 1 | Detects ambient light intensity |
| PIR Sensor | 1 | Detects human or animal movement |
| Buzzer | 1 | Audio alert device |
| Red LED | 1 | Motion detected indicator |
| Green LED | 1 | System active indicator |
| Resistors (10kΩ, 220Ω) | As needed | For LDR and LED |
| Jumper Wires | Several | For circuit connections |
| Breadboard / PCB | 1 | For circuit assembly |

---

## 🔌 Circuit Description
- The **LDR** is connected in a voltage divider setup to read light intensity.  
- When the **LDR value < 50**, it indicates darkness and activates the **PIR sensor**.  
- If motion is detected by the PIR sensor, the **buzzer** and **red LED** turn **ON**.  
- When no motion is detected, the **green LED** remains **ON** to show the system is active.  

---

## 💡 Applications
- Home and shop night security systems  
- Office and warehouse monitoring  
- Automatic outdoor lighting and alert system  

---

## 🚀 Future Enhancements
- Add **IoT support** (Wi-Fi module) for online motion alerts  
- Integrate **GSM module** for SMS notifications  
- Add a **camera module** to capture images on motion detection  
- Enable **battery or solar power** for portable use  

---

## 📂 Project Files
- **code.c** → Contains main project source code  
- **circuit_diagram.jpg** → Complete circuit wiring layout  
- **project_image.jpg** → Real prototype working image  
- **README.md** → Project documentation file  

---

## 👨‍💻 Developed By
**Goutam Suthar**  
Electronics & Communication Engineering (ECE)  
Gujarat Technological University (GTU)  

📧 **Email:** [goutamsuthar5095@gmail.com](mailto:goutamsuthar5095@gmail.com)  
🌐 **GitHub:** [github.com/suthargoutam](https://github.com/suthargoutam)

---

⭐ *If you found this project helpful, please give it a star on GitHub!*