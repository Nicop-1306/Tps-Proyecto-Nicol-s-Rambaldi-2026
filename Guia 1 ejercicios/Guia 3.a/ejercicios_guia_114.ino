#define BUZZ 3

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(0,HIGH);
  digitalWrite(BUZZ, HIGH);
  delay(100);
  digitalWrite(BUZZ,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(1,LOW);
}