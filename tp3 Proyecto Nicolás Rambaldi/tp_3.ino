#include <LiquidCrystal.h>

#define AZUL A2
#define VERDE A3
#define ROJO A4 
#define TEMP A5
#define BUZZ A1
#define ECHO 6
#define TRIG 7
#define MOV 2
#define LUZ A0 
LiquidCrystal LCD(8 , 9, 10, 11, 12, 13); 

void setup()
{
  pinMode(VERDE, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(TEMP, INPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(MOV, INPUT);
  pinMode(LUZ, INPUT);
  
  LCD.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  float temperatura = (analogRead(TEMP) * 5.0 / 1024) * 100 - 50;
  bool mov = digitalRead(MOV);  
  int lus=map(analogRead(LUZ), 317, 1023, 100, 0);  
  float porcentajeLuz = (analogRead(LUZ) / 1023.0) * 100.0;
  bool esNoche = (lus < 20.0);

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);   
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  float tiempo = pulseIn(ECHO, HIGH);
  float dist = tiempo / 57.6;

  Serial.print("Temp: "); Serial.print(temperatura);
  Serial.print("Luz: "); Serial.print(lus);
  Serial.print("Mov: "); Serial.print(mov);
  Serial.print("Dist: "); Serial.println(dist);
  
  analogWrite(ROJO, 0);
  analogWrite(VERDE, 0);
  analogWrite(AZUL, 0);
  analogWrite(BUZZ, 0);
  
  if (esNoche) {
    LCD.clear();
    LCD.setCursor(0,0);
    LCD.print("Luz:");
    LCD.print(lus);
    if (mov == 1 || temperatura > 39) {
      analogWrite(ROJO, 255);
      analogWrite(BUZZ, 255);
      delay(500);
      analogWrite(ROJO, 0);
      analogWrite(BUZZ, 0);
      delay(500);
    }
  } 
  
  else {
    LCD.clear();
    LCD.setCursor(0,0);
    LCD.print("Temp:");
    LCD.print(temperatura);

    if (temperatura > 39) {
      analogWrite(ROJO, 255);
      analogWrite(BUZZ, 255);
      delay(1000);
      analogWrite(BUZZ, 0);
      delay(600);
    }
    
    LCD.setCursor(0,1);
    LCD.print("Mov:");
    if (mov == 0) {
      LCD.print("Normal");
    } else {
      LCD.print("CUIDADO");
      analogWrite(ROJO, 255);
      analogWrite(VERDE, 255);
      analogWrite(BUZZ, 255);
      delay(1000);
      analogWrite(BUZZ, 0);
      delay(600);
    }

    delay(1500);
    LCD.clear();
    LCD.setCursor(0,1);
    LCD.print("Dis:");
    LCD.print(dist);
    LCD.print("cm.");

    if (dist < 100) {
      analogWrite(ROJO, 255);
      analogWrite(BUZZ, 255);
      delay(300);
      analogWrite(ROJO, 0);
      analogWrite(BUZZ, 0);
      delay(300);
      analogWrite(ROJO, 255);
      analogWrite(BUZZ, 255);
      delay(300);
      analogWrite(ROJO, 0);
      analogWrite(BUZZ, 0);
      delay(100);
    }
  }

  delay(500);
}
