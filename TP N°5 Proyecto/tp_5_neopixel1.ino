#include <Adafruit_NeoPixel.h>
#define NeoPixel 3
#define Cant_Pixel 12

Adafruit_NeoPixel NEO = Adafruit_NeoPixel( Cant_Pixel , NeoPixel , NEO_GRB + NEO_KHZ800 );

void setup()
{
  pinMode(NeoPixel, OUTPUT);
  
  NEO.begin();
  NEO.clear();
  NEO.show();
  
  Serial.begin(9600);
}

void loop()
{
  NEO.setBrightness( 255 );
  
  NEO.clear();
  NEO.setPixelColor( 0 , NEO.Color(255, 0, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 1 , NEO.Color(0, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 2 , NEO.Color(0, 0, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 3 , NEO.Color(255, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 4 , NEO.Color(255, 0, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 5 , NEO.Color(0, 255, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 6 , NEO.Color(150, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 7 , NEO.Color(0, 150, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 8 , NEO.Color(150, 150, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 9 , NEO.Color(255, 150, 150) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 10 , NEO.Color(255, 150, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 11 , NEO.Color(100, 100, 10) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.show();
  
  delay(1000);
  
  NEO.clear();
  NEO.setPixelColor( 11 , NEO.Color(100, 100, 10));
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 10 , NEO.Color(255, 150, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 9 , NEO.Color(255, 150, 150) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 8 , NEO.Color(150, 150, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 7 , NEO.Color(0, 150, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 6 , NEO.Color(150, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 5 , NEO.Color(0, 255, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 4 , NEO.Color(255, 0, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 3 , NEO.Color(255, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 2 , NEO.Color(0, 0, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 1 , NEO.Color(0, 255, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.setPixelColor( 0 , NEO.Color(255, 0, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.show();
  
  delay(1000);
  
  NEO.clear();
  NEO.setPixelColor( 0 , NEO.Color(255, 0, 0) );
  NEO.setPixelColor( 2 , NEO.Color(255, 0, 0) );
  NEO.setPixelColor( 4 , NEO.Color(255, 0, 0) );
  NEO.setPixelColor( 6 , NEO.Color(255, 0, 0) );
  NEO.setPixelColor( 8 , NEO.Color(255, 0, 0) );
  NEO.setPixelColor( 10 , NEO.Color(255, 0, 0) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.show();
  delay(100);
  
  NEO.setPixelColor( 1 , NEO.Color(0, 0, 255) );
  NEO.setPixelColor( 3 , NEO.Color(0, 0, 255) );
  NEO.setPixelColor( 5 , NEO.Color(0, 0, 255) );
  NEO.setPixelColor( 7 , NEO.Color(0, 0, 255) );
  NEO.setPixelColor( 9 , NEO.Color(0, 0, 255) );
  NEO.setPixelColor( 11 , NEO.Color(0, 0, 255) );
  NEO.show();
  delay(500);
  
  NEO.clear();
  NEO.show();
  
  delay(1000);
}
