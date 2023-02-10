
#include <Adafruit_SSD1306.h>
#include <splash.h>

#include <Fonts/FreeSerif12pt7b.h>

#include "wire.h"
#include "spi.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);


void setup(){
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
display.clearDisplay();
display.setTextSize(3);
display.setTextColor(WHITE);
display.setCursor(10,8);
display.println("CIG-X");
display.display();
delay(2500);
display.clearDisplay();
}


void loop() {
  
//display.drawRoundRect(0, 0, 128, 7, 1, WHITE);
//display.fillCircle(64, 3, 3, WHITE);

res();
display.drawTriangle(0,6,64,0,128,6, WHITE);
dis();
  
res();
display.setCursor(0,8);
display.println("Temp [C] ");
dis();
res();
display.setCursor(90,8);
display.println("92");
dis();

res();
display.setCursor(0,17);
display.println("Alti [m] ");
dis();
res();
display.setCursor(90,17);
display.println("92");
dis();

res();
display.setCursor(0,25);
display.println("Pres [mmHg] ");
dis();
res();
display.setCursor(90,25);
display.println("92");
dis();
delay(2000);
}


void res(){
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void dis(){
  display.display();
}
