
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
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.drawTriangle(0,6,64,0,128,6, WHITE);
  display.display();

  int i1=0,f1=40;  
  
  diss("T[C]:",i1,8);
  diss2(17,f1,8);
  
  diss("A[m]:",i1,17);
  diss2(2700,f1,17);
  
  diss("P[Pa]:",i1,25);
  diss2(700,f1,25);
  
}


void diss(String r, int a, int b){
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(a,b);
  display.println(r);
  display.display();
}
void diss2(int r, int a, int b){
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(a,b);
  display.println(r);
  display.display();
}
