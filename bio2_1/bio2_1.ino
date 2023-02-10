
char p;
int d1=4,d2=3,d3=2,f1=7,f2=6,f3=5;

void setup(){
Serial.begin(9600);
pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(f1,OUTPUT);
pinMode(f2,OUTPUT);
pinMode(f3,OUTPUT);

digitalWrite(d1,LOW);
digitalWrite(d2,LOW);
digitalWrite(d3,LOW);
digitalWrite(f1,LOW);
digitalWrite(f2,LOW);
digitalWrite(f3,HIGH);
}

void loop(){
  while(Serial.available()>0){
    p=Serial.read();
    if(p=='1'){           
        digitalWrite(d1,LOW);
        digitalWrite(d2,LOW);
        digitalWrite(d3,LOW);
    }
    else if(p=='2'){      
        digitalWrite(d1,LOW);
        digitalWrite(d2,LOW);
        digitalWrite(d3,HIGH);
    }
    else if(p=='3'){      
        digitalWrite(d1,LOW);
        digitalWrite(d2,HIGH);
        digitalWrite(d3,LOW);
    }
    else if(p=='4'){      
        digitalWrite(d1,LOW);
        digitalWrite(d2,HIGH);
        digitalWrite(d3,HIGH);
    }
  }
  delay(500);
}
