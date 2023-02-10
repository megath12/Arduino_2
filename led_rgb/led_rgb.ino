
int b=3,g=5,r=6;
int vr=255;
int vg=0;
int vb=0;
// bwt  255 0 128
// amg  0 153 153
// 

void setup() {
  pinMode(b,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  analogWrite(r,vr);
  analogWrite(g,vg);
  analogWrite(b,vb);
  delay(2);
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(2);
}
