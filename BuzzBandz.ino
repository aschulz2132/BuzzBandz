#include <Arduino.h>
#include <U8x8lib.h>
const int dotButtonPin = D3;
const int dashButtonPin = D2;
const int editToggleButtonPin = D9;
const int playBackButtonPin = D7;
const int motorPin = D10;
bool bruh = false; 
U8X8_SSD1306_128X32_UNIVISION_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);

void setup(void) {



pinMode(dotButtonPin, INPUT_PULLDOWN);
pinMode(dashButtonPin, INPUT_PULLDOWN);
u8x8.begin();
u8x8.clear();
u8x8.setFlipMode(0);
}

void loop(void) {
bool changed = false;
byte dotPressed = digitalRead(dotButtonPin);
byte dashPressed = digitalRead(dashButtonPin);


u8x8.setFont(u8x8_font_chroma48medium8_r);
u8x8.setCursor(0, 0); 

if(dotPressed && !changed){
  u8x8.println( "dot pressed");
  changed = true;
  Serial.println("dot pressed")
} 

if(!dotPressed && changed){
  changed = false;
  u8x8.clear();
  Serial.println("dot cleared")
}

if(dashPressed){
  u8x8.println( "dash pressed"); 
}





}
