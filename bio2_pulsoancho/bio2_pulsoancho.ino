
int v,sa=4,sw=2;

void setup() {
  pinMode(sa,OUTPUT);
  pinMode(sw,OUTPUT);
  digitalWrite(sw,HIGH);
}

void loop() {
  v=analogRead(0);
  v=map(v,0,1023,10,50);
  digitalWrite(sa,HIGH);
  delay(v);
  digitalWrite(sa,LOW);
  delay(500-v);
}
