int r=12,a=11,v=10,p=7,va;

void setup(){
  pinMode(r,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(v,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  va=analogRead(p);
  if(va<200){
    digitalWrite(r,HIGH);    
    digitalWrite(a,HIGH);
    digitalWrite(v,HIGH);
    delay(2000);
    ap();
  }
  else if(va>200&&va<400){
    digitalWrite(r,HIGH);    
    delay(2000);
    ap();    
  }
  else if(va>400&&va<600){    
    digitalWrite(a,HIGH);
    delay(2000);
    ap();
  }
  else if(va>600&&va<800){
    digitalWrite(v,HIGH);
    delay(2000);
    ap();
  }
  else if(va>800){
    digitalWrite(r,HIGH);
    delay(1300);    
    digitalWrite(a,HIGH);
    delay(1300);
    digitalWrite(r,LOW);
    delay(1300);
    digitalWrite(v,HIGH);
    delay(1300);
    digitalWrite(a,LOW);
    delay(4000);
    ap();
  }
  Serial.println(va);
}

void ap(){
    digitalWrite(r,LOW);    
    digitalWrite(a,LOW);
    digitalWrite(v,LOW);
}
