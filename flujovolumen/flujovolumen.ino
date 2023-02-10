volatile int NumPulsos; //variable para la cantidad de pulsos recibidos
int PinSensor = 2;    //Sensor conectado en el pin 2
float factor_conversion=7.5; //para convertir de frecuencia a caudal

void ContarPulsos ()
{ 
  NumPulsos++;  //incrementamos la variable de pulsos
} 

//---Función para obtener frecuencia de los pulsos--------
int ObtenerFrecuencia() 
{
  int frecuencia;
  NumPulsos = 0;   //Ponemos a 0 el número de pulsos
  interrupts();    //Habilitamos las interrupciones
  delay(100);   //muestra de 1 segundo
  noInterrupts(); //Desabilitamos las interrupciones
  frecuencia=NumPulsos; //Hz(pulsos por segundo)
  return frecuencia;
}

void setup()
{ 
  Serial.begin(9600); 
  pinMode(PinSensor, INPUT); 
  attachInterrupt(0,ContarPulsos,RISING); //(Interrupcion 0(Pin2),funcion,Flanco de subida)
} 

void loop ()    
{
  float frecuencia=ObtenerFrecuencia(); //obtenemos la Frecuencia de los pulsos en Hz
  float caudal_L_m=frecuencia/factor_conversion; //calculamos el caudal en L/m
  float caudal_L_h=caudal_L_m*60; //calculamos el caudal en L/h

//-----Enviamos por el puerto serie---------------
//  Serial.print ("FrecuenciaPulsos: "); 
//  Serial.print (frecuencia,0); 
//  Serial.print ("Hz\tCaudal: "); 
  ////Serial.print (caudal_L_m,3); 
//  Serial.print (" L/m\t"); 
//  Serial.print (caudal_L_h,3); 
//  Serial.println ("L/h"); 
delay(1000);
Serial.print("Volumen ");
Serial.print('4');
Serial.print(" - ");
Serial.print("Velocidad ");
Serial.println('2');
delay(9000);
}
