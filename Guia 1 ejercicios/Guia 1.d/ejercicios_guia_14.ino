void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  digitalWrite(3,HIGH);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  digitalWrite(4, LOW);
}