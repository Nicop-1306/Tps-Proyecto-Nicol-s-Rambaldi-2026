#define MSG_LUZ "El nivel de luz actual es: "
#define MSG_TEMP " y la temperatura actual: "
#define MSG_GRADOS "ºc" 

int PIN_TEMP = A1;
int PIN_LDR  = A2;

int PIN_R = 2;
int PIN_G = 7;
int PIN_B = 4;

int valorLuz = 0;
int porcentajeLuz = 0;
int valorTemp = 0;

void setup() {
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  valorLuz = analogRead(PIN_LDR);
  porcentajeLuz = map(valorLuz, 1023, 0, 0, 100);
  
  valorTemp = analogRead(PIN_TEMP);
  float milivoltios = (valorTemp * 5000.0) / 1023.0;
  float temperatura = (milivoltios - 500.0) / 10.0; 

  Serial.print(MSG_LUZ);
  Serial.print(porcentajeLuz);
  Serial.println("%"); 

  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(MSG_GRADOS); 
  
  if (porcentajeLuz >= 30 && porcentajeLuz <= 70) {

    if (temperatura > 90.0) {
      digitalWrite(PIN_R, HIGH);
      digitalWrite(PIN_G, LOW);
      digitalWrite(PIN_B, LOW);
    } 
    else if (temperatura < 18.0) {
      digitalWrite(PIN_R, LOW);
      digitalWrite(PIN_G, LOW);
      digitalWrite(PIN_B, HIGH);
    } 
    else if (temperatura >= 18.0 && temperatura <= 90.0) { 
      digitalWrite(PIN_R, LOW);
      digitalWrite(PIN_G, HIGH);
      digitalWrite(PIN_B, LOW);
    }

  } else {
    
    digitalWrite(PIN_R, LOW);
    digitalWrite(PIN_G, LOW);
    digitalWrite(PIN_B, LOW);
  }
  
  delay(500);
}