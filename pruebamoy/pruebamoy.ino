int pot=0,sa=4,va=1,h=200,lo;

void setup() {
  pinMode(4,OUTPUT);
}

void loop() {
  va=analogRead(pot);
  if(va<123){
    lo=499;
  }
  else{
    lo=999;
  }
  digitalWrite(sa,HIGH);
  delayMicroseconds(h);
  digitalWrite(sa,LOW);
  delay(lo);
}
