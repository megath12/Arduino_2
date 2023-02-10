
int k,k2,sa;

void setup() {
Serial.begin(9600);
}

void loop() {
k=analogRead(6);
k2=analogRead(7);
Serial.println(k);
delay(60);

}
