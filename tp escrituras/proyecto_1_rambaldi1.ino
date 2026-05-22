void setup()
{
  pinMode(5, OUTPUT); //led verde 1
  pinMode(6, OUTPUT); //led rojo 1
  
  pinMode(A2, OUTPUT); //led verde 2
  pinMode(4, OUTPUT); //led azul 2
  pinMode(3, OUTPUT); //led rojo 2
  
  pinMode(9, OUTPUT); //led verde 3
  pinMode(10, OUTPUT); //led azul 3
  pinMode(11, OUTPUT); //led rojo 3
  
  pinMode(A1, OUTPUT); //buzzer
}

void loop()
{
  
  analogWrite(6, 255);
  delay(600);

  analogWrite(A1, 1023);
  delay(100);
  
  analogWrite(A1, 0);
  analogWrite(6, 0);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(600);  
  
  analogWrite(A1, 1023);
  delay(100);
  
  analogWrite(A1, 0);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  analogWrite(9, 50);
  analogWrite(10, 50);
  delay(600);
  
  analogWrite(A1, 1023);
  delay(100);
    
  analogWrite(A1, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}