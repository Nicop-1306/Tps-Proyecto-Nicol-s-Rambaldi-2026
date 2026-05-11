#define R 9
#define G 10
#define B 11

#define POTR A0
#define POTG A3
#define POTB A5

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  map(POTR, 0, 1023, 0, 255);
  map(POTG, 0, 1023, 0, 255);
  map(POTB, 0, 1023, 0, 255);
  int valorR = analogRead(POTR);
  int valorG = analogRead(POTG);
  int valorB =analogRead(POTB);
  
  analogWrite(R, valorR);
  analogWrite(G, valorG);
  analogWrite(B, valorB);
}