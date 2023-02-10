int mv=3;

void setup() {
pinMode(mv,OUTPUT);
Serial.begin(9600);

}

void loop() {

for(int y=0; y<=255 ; y=y+2){
  analogWrite(mv,y);
  Serial.println(y);
  delay(100);
}

for(int y=254; y>=3 ; y=y-2){
  analogWrite(mv,y);
  Serial.println(y);
  delay(100);
}
}
