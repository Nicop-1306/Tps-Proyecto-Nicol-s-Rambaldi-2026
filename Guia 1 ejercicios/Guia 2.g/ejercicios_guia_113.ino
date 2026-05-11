#define POT A5
#define BUZ 3

void setup()
{
  pinMode(BUZ, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  map(POT, 0, 1023, 100, 2000);
  int valorP=analogRead(POT);
  Serial.println(valorP);
  tone(BUZ, valorP);
}