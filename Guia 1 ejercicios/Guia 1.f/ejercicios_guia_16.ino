#define botn 5
#define buzzer 3

void setup()
{
pinMode(buzzer, OUTPUT);
pinMode(botn, INPUT);
}
void loop()
{
  int boton=digitalRead(botn);
  
  Serial.print("  Boton: ");
  Serial.print(boton);
  
  if(boton==HIGH){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
}