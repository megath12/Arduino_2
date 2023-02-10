
const int ad[200]={78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,79,81,85,89,93,96,98,98,96,92,88,84,81,79,78,78,78,78,78,78,78,78,76,71,66,59,54,50,49,63,94,134,177,216,244,255,242,209,164,114,67,32,16,18,26,38,51,63,73,78,78,78,78,78,78,78,78,79,82,87,93,99,104,107,108,105,100,94,88,83,79,78,78,78,78,78,78,78,78,78,78,78,78,78,78,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,187,190,194,199,202,204,204,201,198,194,190,186,184,184,184,184,184,184,184,184,184,190,201,215,230,243,252,255,238,200,150,97,49,14,0,10,35,70,108,144,171,183,184,184,184,184,184,184,184,184,188,193,200,206,211,214,214,210,205,199,193,187,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184};

String p;
int d=3,yu,k,v1,v2,j,q2,q3;
char p1,p2,p3;
float vd,dt;

void setup(){
Serial.begin(9600);
pinMode(d,OUTPUT);
//delay(2000);
v1=0;
v2=100;
dt=8;
vd=1;
}


void loop(){
  while(Serial.available()>0){
    p=Serial.readString();
    if(p[0]=='0'){           //posicion de vector ecg adulto
        v1=0;
        v2=100;
    }
    else if(p[0]=='1'){      //posicion de vector ecg neonato
        v1=100;
        v2=200;
    }
    p1=p[1];
    p2=p[2];
    p3=p[3];
    q2=(p2-48);
    q3=(p3-48);
          //condición cardiaca
    if(p1=='1'){              //Normal       60-100bpm
      dt=map(q2,0,9,10,6); 
    }
    else if(p1=='2'){         //Taquicardia  100-150 bpm
      dt=map(q2,0,9,6,4); 
    }
    else if(p1=='3'){         //Bradicardia   37.5-60 bpm
      dt=map(q2,0,9,10,16); 
    }
    vd=map(q3,0,9,0,10);      //multiplicador de amplitud
  }
//  Serial.print(p[0]);
//  Serial.print(p1);
//  Serial.print(q2);
//  Serial.print("  ");
//  Serial.println(q3);  
  for(k=v1;k<v2;k++){
    yu=ad[k];
    Serial.println(vd*yu/10);     //amplitud final de la señal
    delay(dt);                    //frecuencia final de la señal
  }
}
