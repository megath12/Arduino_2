
int r=3,g=4,b=5,vs,s=7,pr=6,vp;
unsigned long tc,tn,tt;
float t1,t2,t3;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {  
  lcd.init();
  Wire.begin();
  lcd.clear();
  lcd.backlight();
  pinMode(r,OUTPUT);  
  pinMode(g,OUTPUT);  
  pinMode(b,OUTPUT);  
  tn=1000;
  Serial.begin(9600);
}


void loop() {
  vp=analogRead(pr);
  if(vp<25){
    tc=millis();
    tt=(tc-tn);
    t1=double(tt)/1000;
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Vuelta rapida");
    lcd.setCursor(6,1);
    lcd.print(t1,3);
    tn=millis();
    delay(350);
  }
  vs=analogRead(s);
  if(vs<=350){
    ap();
    digitalWrite(r,HIGH);
  }
  else if(vs>350&&vs<=700){
    ap();
    digitalWrite(b,HIGH);
  }
  else{
    ap();
    digitalWrite(g,HIGH);    
  }
  Serial.println(vp);
}


void ap(){
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
}
