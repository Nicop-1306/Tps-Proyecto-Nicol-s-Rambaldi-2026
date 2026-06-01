#include <LiquidCrystal.h>

#define AZUL A2
#define VERDE A3
#define ROJO A4 
#define TEMP A5
#define BUZZ A1
#define ECHO 6
#define TRIG 7
#define MOV 2
#define LUZ 4

LiquidCrystal LCD(8 , 9, 10, 11, 12, 13); 

void setup()
{
  pinMode(AZUL, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(ROJO, OUTPUT);
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
  LCD.clear();
  float temperatura=(analogRead(TEMP)*5.0/1024)*100-50;
  LCD.setCursor(0,0);
  LCD.print("Temp: ");
  LCD.print(temperatura);
  
  if(temperatura>39){
    analogWrite(ROJO, 255);
    analogWrite(BUZZ, 255);
    delay(1000);
    analogWrite(BUZZ, 0);
    delay(600);
  }
  
  bool mov = digitalRead(MOV);    
  LCD.setCursor(0,1);
  LCD.print("Mov:");
  if(mov==0){
    LCD.print("Normal");
  }else{
    LCD.print("CUIDADO");
    analogWrite(ROJO, 255);
    analogWrite(VERDE,255);
    analogWrite(BUZZ, 255);
    delay(1000);
    analogWrite(BUZZ, 0);
    delay(600);
  }
  
  delay(1500);
  LCD.clear();
  bool luz=!digitalRead(LUZ);
  LCD.setCursor(0,0);
  LCD.print("Luz: ");
  LCD.print(luz);
  if(luz==0&&(mov==1||temperatura>39)){
    analogWrite(ROJO, 255);
    analogWrite(BUZZ, 255);
    delay(500);
    analogWrite(ROJO, 0);
    analogWrite(BUZZ, 0);
    delay(500);
  }
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);   // 1mCs -> 1000mLs  delay(1)
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  float tiempo = pulseIn( ECHO , HIGH );
  float dist = tiempo / 57.6;
  if(luz==1){
  LCD.setCursor(0,1);
  LCD.print("Dis:");
  LCD.print(dist);
  LCD.print("cm.");
  if(dist<100){
    analogWrite(ROJO, 255);
    analogWrite(BUZZ, 255);
    delay(300);
    analogWrite(ROJO, 0);
    analogWrite(BUZZ, 0);
    delay(300);
    analogWrite(ROJO, 255);
    analogWrite(BUZZ, 255);
  }}
  
  delay(2000);
  analogWrite(ROJO,0);
  analogWrite(AZUL,0);
  analogWrite(VERDE,0);
}