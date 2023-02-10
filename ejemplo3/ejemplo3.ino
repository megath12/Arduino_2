//
//int sa=0,v,en=6;
//
//void setup() {
//  Serial.begin(9600);
//}
//
//void loop() {
//  v=analogRead(en);;
//  Serial.println(v);
//  delay(10);
//}


int sensor=0,pc=A1,led=13,b;
double k;
unsigned long r,t3;
volatile long t1=0,t2=0;


void setup() {
  Serial.begin(9600);
}


void loop() {
b=analogRead(1);
if (b>550){
  t2=millis();
  t3=abs(t1-t2);
  r=60/t3*1000;
  Serial.println(r);  
  t1=millis();
  delay(200);
  }
delay(2);
}




















//
//
//#include <LiquidCrystal.h>
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//double k;
//unsigned long r,t3;
//volatile long t1=0,t2=0;
//
//void setup() {
//  Serial.begin(9600);
//  lcd.begin(16, 2);
//  lcd.print("Frecuencia");
//  delay(2000);
//  lcd.clear();
//}
//
//void loop() {
//  int sensorValue = analogRead(A0);
//  if (sensorValue>45){
//    t2=millis();
//    t3=abs(t1-t2);
//    r=(60/t3)*1000;
//    Serial.println(r);
//    t1=millis();
//    delay(200);
//    lcd.setCursor(0,5);
//    lcd.print(r);
//    
//  }
//  Serial.println(sensorValue);
//  delay(1);        
//}
//
