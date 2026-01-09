/*
  Project: ESP32 TFT Display Test
  Purpose: Testing and validating TFT display functionality

  Created by: ProtoSam IoT
  GitHub: https://github.com/ProtoSamIoT
  YouTube: https://www.youtube.com/@protosamiot

  This sketch tests colors, text, shapes, and refresh rate
  to ensure proper TFT display operation with ESP32.

  Star ⭐ the repo and subscribe for more ESP32 & IoT projects.
*/
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

// TFT pins
#define TFT_CS   5
#define TFT_DC   2
#define TFT_RST  4

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

// Simple thumbs-up icon (16x16)
const uint16_t thumbColor = ST77XX_YELLOW;

void drawThumb(int x, int y) {
  tft.fillRect(x+4, y+2, 4, 10, thumbColor);   // thumb
  tft.fillRect(x, y+6, 12, 6, thumbColor);    // palm
  tft.fillRect(x+8, y+10, 4, 4, thumbColor);  // wrist
}

void setup() {
  SPI.begin(18, -1, 23);

  // Initialize TFT
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);   // Landscape mode
  tft.fillScreen(ST77XX_BLACK);
}

void loop() {

  // -------- Screen 1 --------
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.setCursor(10, 40);
  tft.println("TFT Display");
  tft.setCursor(35, 65);
  tft.println("Test");
  delay(2000);

  // -------- Screen 2 --------
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextSize(2);
  tft.setCursor(10, 55);
  tft.println("by");
  tft.setCursor(10, 80);
  tft.println("Protosamiot");
  delay(2000);

  // -------- Screen 3 --------
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextSize(1);
  tft.setCursor(10, 40);
  tft.println("Like  Comment");
  tft.setCursor(10, 60);
  tft.println("Subscribe");

  // Draw thumbs-up icon
  drawThumb(110, 50);

  delay(2000);
}