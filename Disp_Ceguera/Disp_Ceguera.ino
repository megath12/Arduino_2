
#include "Adafruit_VL53L0X.h"
int mv=3,v;
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(115200);
  while (! Serial) {
    delay(1);
  }
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  Serial.println(F("VL53L0X API Simple Ranging example\n\n")); 
  pinMode(mv,OUTPUT);
}


void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false); 
  if (measure.RangeStatus != 4) {
    if(measure.RangeMilliMeter<50 || measure.RangeMilliMeter>700){
      measure.RangeMilliMeter=600;
    }
  Serial.println(measure.RangeMilliMeter);
  } else {
    measure.RangeMilliMeter=700;
    Serial.println(" out of range ");
  }
  delay(200);
  v=map(measure.RangeMilliMeter,700,40,0,180);
  analogWrite(mv,v);
  
}
