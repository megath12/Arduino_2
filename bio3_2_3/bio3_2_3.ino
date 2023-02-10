
int e=0,v,v1=0,vs,r1,r2,r3,j,sa=6,v2,va,vp=0;
int n=10;

void setup() {
  pinMode(sa,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  for(int k1=0;k1<n;k1++){
    for(int k=0;k<240;k++){
        v=analogRead(1);
        if(v>v1){
          va=v;
          r2=(k+1)*10;
        }
        delay(5);
        r1=(k+1)*10;
        v1=v;
        r3=r1-r2;
        if(k>29&r3>r2) break;
    }
    vp+=va;
  }
  vp/=n;
  v2=map(vp,0,1023,0,5000);
  //analogWrite(sa,v2);
  Serial.println(v2*0.9);
  vp=0;
}
