//
//int v[15]={127,182,227,251,251,227,182,127,72,27,3,3,27,72,127};
//int sa=6,va,da;
//double f1=44.5,f2=0.29,f3=0.139,f4=0.119,f5=0.098,f;
//
//
//void setup() {
//  pinMode(sa,OUTPUT);
//  f=f1;
//}
//
//
//void loop() {
//  if(Serial.available()>0){
//    da=Serial.read();
//    if(da=='1'){
//      f=f1;
//    }
//    else if(da=='2'){
//      f=f2;
//    }
//    else if(da=='3'){
//      f=f3;
//    }
//    else if(da=='4'){
//      f=f4;
//    }
//    else if(da=='5'){
//      f=f5;
//    }
//  }
//  for(int k=0;k<15;k++){
//    va=v[k];
//    analogWrite(sa,va);
//    delayMicroseconds(f);
//  }
//}

//
//
//int v[15]={127,182,227,251,251,227,182,127,72,27,3,3,27,72,127};
//int sa=6,va,da;
//double f1=66600,f2=0.098,drs;
//
//
//void setup() {
//  Serial.begin(9600);
//  pinMode(sa,OUTPUT);
//  drs=f1;
//}
//
//
//void loop() {
//  if(Serial.available()>0){
//    da=Serial.read();
//    da=da-48;
//    drs=map(da,0,9,f1,f2);
//  }
//  for(int k=0;k<15;k++){
//    va=v[k];
//    analogWrite(sa,va);
//    delayMicroseconds(drs);
//  }
////  Serial.println(da);
////  delay(200);
//}








int v[15]={127,182,227,251,251,227,182,127,72,27,3,3,27,72,127};
int sa=6,saa=5,va,da;
double f1=1,f2=0.667,f3=0.5,drs;


void setup() {
  pinMode(sa,OUTPUT);
  pinMode(saa,OUTPUT);
  digitalWrite(saa,HIGH);
}


void loop() {
  va=analogRead(0);
  da=map(va,0,1023,1,3);
  if(da==1){
    drs=f1;
  }
  else if(da==2){
    drs=f2;
  }
  else{
    drs=f3;
  }
  for(int k=0;k<15;k++){
    va=v[k];
    analogWrite(sa,va);
    delayMicroseconds(drs);
  }
}
