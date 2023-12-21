// Sparkfun Pro Micro 5V 16 MHz

int l1=2,l2=3,l3=4,l4=5,l5=6,am=8,ro=9,ve=7,lec;


void setup() {
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(am,OUTPUT);
  pinMode(ro,OUTPUT);
  pinMode(ve,OUTPUT);
  pinMode(A0,INPUT);
}


void loop() {
  lec=analogRead(0);
  if(lec>=0 && lec<200){             // 5 Luces
    delay(3000);
    for(int re=2; re<=6; re++){
      digitalWrite(re,HIGH);
      delay(1500);
    }
    delay(600);
    apaga();
    delay(3500);
  }
  else if(lec>=200 && lec<400){     // Verde
    digitalWrite(ve,HIGH);
    delay(3000);
  }
  else if(lec>=400 && lec<600){    // Amarillo
    digitalWrite(am,HIGH);
    delay(3000);
  }
  else if(lec>=600 && lec<800){     // Rojo
    digitalWrite(ro,HIGH);
    delay(3000);
  }
  else{                             // Semaforo
    digitalWrite(ro,HIGH);
    digitalWrite(am,HIGH);
    digitalWrite(ve,HIGH);    
    delay(3000);
  }
  apaga();
}

void apaga(){
  for(int re=2; re<=9; re++){
    digitalWrite(re,LOW);
  }
}
