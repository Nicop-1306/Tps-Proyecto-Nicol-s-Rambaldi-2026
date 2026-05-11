#define GREEN 2
#define BLUE 3
#define ROJO 4

#define ROJO_2 8
#define BLUE_2 9
#define GREEN_2 10

void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(ROJO, OUTPUT);
  
  pinMode(ROJO_2, OUTPUT);
  pinMode(BLUE_2, OUTPUT);
  pinMode(GREEN_2, OUTPUT);
}

void loop()
{
  digitalWrite(ROJO, HIGH);
  delay(700);
  digitalWrite(ROJO, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(700);
  digitalWrite(BLUE, LOW);
  delay(700);
  digitalWrite(GREEN, LOW);
  digitalWrite(ROJO, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(700);
  digitalWrite(ROJO, LOW);
  delay(700);
  digitalWrite(ROJO, HIGH);
  digitalWrite(GREEN, HIGH);
  delay(700);
  digitalWrite(BLUE, LOW);
  delay(700);
  digitalWrite(ROJO, LOW);
  digitalWrite(GREEN, LOW);
  
  
  digitalWrite(ROJO_2, HIGH);
  delay(700);
  digitalWrite(ROJO_2, LOW);
  digitalWrite(GREEN_2, HIGH);
  digitalWrite(BLUE_2, HIGH);
  delay(700);
  digitalWrite(BLUE_2, LOW);
  delay(700);
  digitalWrite(GREEN_2, LOW);
  digitalWrite(ROJO_2, HIGH);
  digitalWrite(BLUE_2, HIGH);
  delay(700);
  digitalWrite(ROJO_2, LOW);
  delay(700);
  digitalWrite(ROJO_2, HIGH);
  digitalWrite(GREEN_2, HIGH);
  delay(700);
  digitalWrite(BLUE_2, LOW);
  delay(700);
  digitalWrite(ROJO_2, LOW);
  digitalWrite(GREEN_2, LOW);
}