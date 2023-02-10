
int p1=0,p2=1,sa=6,sa1=11;
int v1,v2,ca,m1,mc;
double m2;

void setup(){
  pinMode(sa,OUTPUT);
  pinMode(sa1,OUTPUT);  
}

void loop(){
  v1=analogRead(p1);
  v2=analogRead(p2);
  m1=map(v1,0,1023,51,255);        //voltaje     1-5 V
  m2=map(v2,0,1023,33.333,3.333);              //frecuencia  30-300 Hz
  for(int k=0;k<30;k++){
    analogWrite(sa1,m1/2);
    analogWrite(sa,m1);
    delay(m2/2);
    digitalWrite(sa,LOW);
    delay(m2/2);
  }
}
