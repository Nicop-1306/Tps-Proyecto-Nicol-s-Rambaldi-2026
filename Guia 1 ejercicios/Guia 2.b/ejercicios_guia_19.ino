
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(0, LOW);
  analogWrite(3, 35);
  analogWrite(5, 60);
  analogWrite(6, 100);
  analogWrite(9, 150);
  analogWrite(10, 170);
  analogWrite(11, 200);
  digitalWrite(1, HIGH);
}