# 🗑️ Smart Dustbin using Arduino (Ultrasonic Sensor + Servo Motor)

This project is a **Smart Dustbin** that automatically opens and closes its lid using an **Ultrasonic Sensor (HC-SR04)** and a **Servo Motor**, controlled by **Arduino UNO**.

---

## 📌 Features
- Touch-free dustbin lid opening  
- Automatic lid closing after a few seconds  
- Distance-based object detection  
- Simple and low-cost automation project  

---

## 🛠️ Components Used
- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor (SG90 / MG90)  
- Jumper Wires  
- Breadboard (optional)  
- Dustbin / Cardboard DIY setup  

---

## 🔌 Circuit Connections

### Ultrasonic Sensor (HC-SR04)

| Sensor Pin | Arduino Pin |
|-----------|-------------|
| VCC       | 5V          |
| GND       | GND         |
| TRIG      | D13         |
| ECHO      | D12         |

### Servo Motor

| Servo Pin | Arduino Pin |
|----------|-------------|
| VCC      | 5V          |
| GND      | GND         |
| Signal   | D9          |

---

## ⚙️ Working
1. The ultrasonic sensor detects an object (hand/person) near the dustbin.  
2. If the distance is less than a defined threshold, the servo motor opens the lid.  
3. The lid remains open for a few seconds.  
4. After the delay, the lid closes automatically.  

---

## 📂 Code
The Arduino code is available in: code/smart_dustbin.ino


---

## 🚀 How to Run
1. Open the `.ino` file in Arduino IDE  
2. Select your board (**Arduino UNO**)  
3. Select the correct COM port  
4. Upload the code  
5. Test by moving your hand near the sensor  

---

## 👨‍💻 Author
Parag Saini

## 📄 License
This project is open-source and free to use for learning purposes.


---

If you want, I can also give you the **Arduino code (`smart_dustbin.ino`)** with:  
✅ better accuracy  
✅ smooth servo movement  
✅ stable distance reading  
✅ 5 seconds delay before closing

---
