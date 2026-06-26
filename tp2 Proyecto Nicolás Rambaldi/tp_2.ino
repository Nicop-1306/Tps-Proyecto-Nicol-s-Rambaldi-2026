#define ROJO 10
#define VERDE 9
#define AZUL 11
#define Buzzer 12
#define PotVel A0
#define PoteRojo A3
#define PoteAzul A2
#define PoteVerde A1
#define Boton 2

bool estadoBoton = 0;
bool ultimaVez = 0;
void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(PotVel, INPUT);
  pinMode(PoteRojo, INPUT);
  pinMode(PoteVerde, INPUT);
  pinMode(PoteAzul, INPUT);
  attachInterrupt(digitalPinToInterrupt(Boton) , leer_boton, FALLING );
  Serial.begin(9600);
}

void loop()
{
  int PoteA = map(analogRead(PoteAzul), 0, 1023, 0, 255);
  int PoteV = map(analogRead(PoteVerde), 0, 1023, 0, 255);
  int PoteR = map(analogRead(PoteRojo), 0, 1023, 0, 255);
  int Velocidad = map(analogRead(PotVel), 0,1023,0,3000);
  Serial.print("Velocidad:");
  Serial.println(Velocidad/1000);
  Serial.print("Rojo:");
  Serial.println(PoteR);
  Serial.print("Verde:");
  Serial.println(PoteV);
  Serial.print("Azul:");
  Serial.println(PoteA);

  if ( Boton == 0 && ultimaVez == 1)
  {
    estadoBoton = !estadoBoton;
    delay(100);
  }
  ultimaVez = Boton;
  
 if(estadoBoton == 1)
 {  
  digitalWrite(Buzzer, 1);
  delay(100);
  digitalWrite(Buzzer, 0);
  analogWrite(ROJO, PoteR);
  analogWrite(VERDE, PoteV);
  analogWrite(AZUL, PoteA);
  delay(Velocidad);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 95);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 255);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 0);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 95);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 255);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 0);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 95);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 255);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 0);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 95);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 255);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(VERDE, 0);
  analogWrite(AZUL, 0);
  analogWrite(ROJO, 0);
  delay(100);
 }
}
void leer_boton()
{
  estadoBoton=!estadoBoton;
}