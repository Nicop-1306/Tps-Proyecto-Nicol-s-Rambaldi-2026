# Tps-Proyecto-Nicolas-Rambaldi-2026
Tps de proyecto informatico
Nicolás Rambaldi, nicolas.rambaldi1306@gmail.com, 3ro 4ta 2026

1.a-
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  
  delay(2000);
  
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  
  delay(1000);
  
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(6,HIGH);
  
  delay(2000);
  
  digitalWrite(2,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  
  delay(1000);
  
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
<img width="389" height="511" alt="image" src="https://github.com/user-attachments/assets/6e020e17-2e60-4c60-bbd1-b0600f6d213d" />


1.b-
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(11,HIGH);
  delay(500);
  
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}

<img width="275" height="513" alt="image" src="https://github.com/user-attachments/assets/72bc94b7-fe7d-46e5-a79a-279fef7528bc" />


1.c-
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(1000); 
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
}
<img width="206" height="328" alt="image" src="https://github.com/user-attachments/assets/c66e6ede-55e3-46fa-8a36-4c882b16ac93" />

1.d-
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
<img width="229" height="344" alt="image" src="https://github.com/user-attachments/assets/a30a71f9-5fa4-4544-a605-e25c4e85213b" />

1.e-
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
<img width="223" height="356" alt="image" src="https://github.com/user-attachments/assets/8c282d05-196a-4c03-bc70-796b9ac3c142" />

1.f-
#define botn 5
#define buzzer 3

void setup()
{
pinMode(buzzer, OUTPUT);
pinMode(botn, INPUT);
}
void loop()
{
  int boton=digitalRead(botn);
  
  Serial.print("  Boton: ");
  Serial.print(boton);
  
  if(boton==HIGH){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
}

<img width="265" height="349" alt="image" src="https://github.com/user-attachments/assets/0ecc6373-dab2-465d-970f-47cc9c1590ca" />


2.a-

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

<img width="249" height="404" alt="image" src="https://github.com/user-attachments/assets/9a8160c6-0cb7-4448-9a46-1dede553b2c3" />


2.b-
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
<img width="166" height="252" alt="image" src="https://github.com/user-attachments/assets/3e103e18-23a7-440b-9fe5-4323fb0c2b04" />

2.c-
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
<img width="149" height="244" alt="image" src="https://github.com/user-attachments/assets/364548e1-67d3-4ac2-85a1-04db4cf0ff0b" />

2.d-
#define POT A5
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valorPot = analogRead(POT);
  int velocidad = map(valorPot, 0, 1023, 50, 500);
  
  Serial.print("Retraso: ");
  Serial.println(velocidad);


  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  

  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(velocidad);

  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(velocidad);
}
<img width="148" height="223" alt="image" src="https://github.com/user-attachments/assets/a610c0fc-e86c-40ec-a4be-86d24bf24b18" />


2.e-
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

<img width="161" height="240" alt="image" src="https://github.com/user-attachments/assets/70404831-c5a9-4ae3-83ba-99bc4ec27202" />

2.g-
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

<img width="148" height="243" alt="image" src="https://github.com/user-attachments/assets/07ac5915-1675-4b15-b1e0-7f3c29d8d26a" />


3.1-
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

<img width="184" height="375" alt="image" src="https://github.com/user-attachments/assets/63de68ae-95de-4b2b-80a3-a21b15cd4b9b" />



consignas:
1-
a-Simular el ciclo de encendido de luces de un semáforo, tanto el del auto como el peatonal al mismo tiempo.
b-Prender una seria de 10 led comunes en una secuencia de escalera.
c-Prender a la vez, de una tanda de 10 leds comunes, los 5 impares y luego los 5 pares, y que vayan alternando el prender y apagar.
d-Simular el semáforo de un tren con 2 led y un Buzzer para el sonido.
e-Prender 2 led RGB de tal manera que uno quede prendido y otro apagado y muestren cada uno cuando prenda esta seria de colores, rojo, cian, verde, magenta, azul, blanco, amarillo
f-Con un botón al mantenerlo presionado lograr iniciar una secuencia de sonidos de prendido y apagado estilo alarma.
g-Con ayuda de un botón y 3 led rgb lograr que cada vez que se toque el botón se apaguen todos los led y solo se prenda 1, cada vez que se toque el botón cambiar de led prendido. (me lo olvide)

2-
a-Prender un led común en 5 intensidades distintas.
b-Generar una cascada de 8 leds comunes que  vayan de apagado gradualmente hasta el último led totalmente prendido el primero totalmente apagado.
c-Con un led rgb mostrar 3 tonalidades distintas de los siguientes colores,  cian, rojo, amarillo.
d-Con ayuda de un potenciómetro cambiar la velocidad de parpadeo de 2 led rgb en color magenta y amarillo
e-Colocar 1 led rgb y 3 potenciómetros, cada potenciómetro debe controlar la intensidad de cada canal del led rgb.
f-Con un potenciómetro variar la velocidad de parpadeo de un led común en un rango de 0s a 10s. (me lo olvide)
g-Con un potenciómetro y un Buzzer generar una gama de sonidos.

3-
a-Generar la simulación de las luces y sonido de una ambulancia.
