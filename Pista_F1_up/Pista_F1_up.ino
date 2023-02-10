

int r=3,g=4,y=5,vs,s=7,pr=6,vp,c;
unsigned long tc,tn,tt;
float t1,t2,t3,vb,tf;
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
  pinMode(y,OUTPUT);  
  Serial.begin(9600);
}


void loop() {
  vs=analogRead(s);
  if(vs>=500){
    c=0;
    t2=10.00;
    tn=1000;    
    digitalWrite(r,HIGH);
    delay(2000);
    ap();
    digitalWrite(y,HIGH);
    delay(4000);  
    ap();
    digitalWrite(g,HIGH);
    delay(2000);  
    while(c<8){
      vp=analogRead(pr);
      if(vp>=50){
        tc=millis();
        tt=(tc-tn);
        t1=double(tt)/1000;
        lcd.clear();
        lcd.setCursor(1,0);
        lcd.print("Tiempo Vuelta");
        lcd.setCursor(6,1);
        lcd.print(t1,3);
        tn=millis();
        delay(350);
        c++;
        if(t1<t2){
          t3=t1;  
        }
        else{
          t3=t2;
        }
        t2=t3;
      }
    }
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Vuelta rapida");
  lcd.setCursor(6,1);
  lcd.print(t3,3);
  ap();
  digitalWrite(y,HIGH);
  delay(2000);
  ap();
  digitalWrite(r,HIGH);
  delay(2000);
  ap();  
  }
  else{
    ap();
    digitalWrite(r,HIGH); 
    delay(1000);
    ap();
    delay(1000);   
  }
  //Serial.println(t1);
}


void ap(){
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(y,LOW);
}
