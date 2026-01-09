# ESP32 TFT Display Test

A simple testing sketch to verify proper working of an SPI TFT display with ESP32.
The display cycles through different colors on power-up and finally confirms that
the display is working correctly.



## 📌 Project Description
This project is used to test an SPI-based TFT display connected to an ESP32.
When powered on, the display shows multiple solid colors to verify color rendering.
At the end of the test, a message is displayed indicating that the TFT display is OK.



## 🧩 Hardware Used
- ESP32 Development Board
- SPI TFT Display (8-pin)
- Jumper Wires
- Breadboard



## 🔌 TFT Display Connections

| TFT Pin | ESP32 Pin |
|--------|-----------|
| VCC | 3.3V |
| GND | GND |
| CS  | GPIO 5 |
| DC  | GPIO 2 |
| RST | GPIO 4 |
| SCK | GPIO 18 |
| SDA (MOSI) | GPIO 23 |
| LED | 3.3V |



## ▶️ How It Works
1. Power is supplied to the ESP32.
2. The TFT display initializes.
3. The screen cycles through different colors.
4. A final message confirms the display is working properly.



## 📺 Demo
YouTube: https://www.youtube.com/@protosamiot



## 📄 License
This project is licensed under the MIT License.


⭐ If you find this project useful, consider starring the repository.
