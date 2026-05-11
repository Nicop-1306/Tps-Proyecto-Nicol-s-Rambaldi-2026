
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(3, 10);
  delay(100);
  analogWrite(3,60);
  delay(100);
  analogWrite(3, 100);
  delay(100);
  analogWrite(3, 150);
  delay(100);
  analogWrite(3, 206);
  delay(100);
  
}