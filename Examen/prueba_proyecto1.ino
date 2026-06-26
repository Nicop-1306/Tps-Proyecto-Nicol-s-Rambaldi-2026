#include <Adafruit_NeoPixel.h>
#include <Adafruit_LiquidCrystal.h>

#define NeoPixel 3
#define Cant_Pixel 6
Adafruit_NeoPixel NEO = Adafruit_NeoPixel( Cant_Pixel , NeoPixel , NEO_GRB + NEO_KHZ800 );

#define Boton 2
bool estadoBoton = 0;

#define Flex A1

Adafruit_LiquidCrystal LCD(8 , 9, 10, 11, 12, 13); //nunca me ando el lcd, q bronca
void setup()
{
  pinMode(NeoPixel, OUTPUT); 
  
  attachInterrupt(digitalPinToInterrupt(Boton) , leer_boton, FALLING );
  LCD.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  NEO.setBrightness(255); //setea el brillo de los leds al maximo
  int pleg=map(analogRead(Flex), 990, 1017, 0, 180);
  Serial.println( pleg );
  LCD.clear();
  LCD.setCursor(0,1);
  LCD.print("Luz:");
  
  if(pleg<=45 && pleg>0){
    
  	NEO.clear();
  	NEO.setPixelColor( 0 , NEO.Color(0, 255, 0) );
  	NEO.show();
  	delay(500);
  	NEO.setPixelColor( 1 , NEO.Color(0, 255, 0) );
  	NEO.show();
  	delay(500);
  }else if(pleg==0){
    NEO.setPixelColor( 0 , NEO.Color(0, 0, 0) );
    NEO.setPixelColor( 1 , NEO.Color(0, 0, 0) );
  }
  
  if(pleg>45 && pleg<90){
    NEO.setPixelColor( 2 , NEO.Color(255, 255, 0) );
    NEO.show();
    delay(500);
    NEO.setPixelColor( 3 , NEO.Color(255, 255, 0) );
    NEO.show();
    delay(500);
  }else if(pleg<45){
    NEO.setPixelColor( 2 , NEO.Color(0, 0, 0) );
    NEO.setPixelColor( 3 , NEO.Color(0, 0, 0) );
  }
  
  if(pleg>90){
    NEO.setPixelColor( 4 , NEO.Color(255, 0, 0) );
    NEO.show();
    delay(500);
    NEO.setPixelColor( 5 , NEO.Color(255, 0, 0) );
    NEO.show();
    delay(500);
  }else{
    NEO.setPixelColor( 4 , NEO.Color(0, 0, 0) );
    NEO.setPixelColor( 5 , NEO.Color(0, 0, 0) );
    NEO.show();
  }
  
  Serial.print("Flex: ");
  Serial.print(pleg );
  Serial.print("Angulo: ");
  Serial.print(pleg/*??? ni idea q iria xd*/);
  Serial.print("Color: ");
  if(pleg<=45 && pleg>0){
    Serial.print("Verde");
  }else if(pleg>45 && pleg<90){
    Serial.print("Amarillo");
  }else if(pleg>90){
    Serial.println("Rojo");
  }
}