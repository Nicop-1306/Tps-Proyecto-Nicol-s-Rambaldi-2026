
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  analogWrite(6, 255);
  analogWrite(5, 255);
  delay(100);
  analogWrite(6, 230);
  analogWrite(5, 230);
  delay(100);
  analogWrite(6, 130);
  analogWrite(5, 130);
  delay(100);
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(100);
  analogWrite(3, 220);
  delay(100);
  analogWrite(3, 140);
  delay(100);
  analogWrite(3, 255);
  analogWrite(6, 255);
  delay(100);
  analogWrite(3, 220);
  analogWrite(6,220);
  delay(100);
  analogWrite(3, 130);
  analogWrite(6, 130);
  delay(100);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
}