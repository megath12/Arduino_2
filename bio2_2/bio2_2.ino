  
int sensor=0,pc=A1,led=13,b;
double k;
unsigned long r,t3;
volatile long t1=0,t2=0;


void setup() {
  Serial.begin(9600);
}


void loop() {
b=analogRead(1);
if (b>630){
  t2=millis();
  t3=abs(t1-t2);
  r=60/t3*1000;
  Serial.println(r);  
  t1=millis();
  delay(200);
  }
delay(2);
}
