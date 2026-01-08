/******************************
 *  
 * Modify for LCD ST7567S 128x64
 * screen:
 * x-----------------------> +
 * y                    |
 * |                    |
 * |---------------------
 * | 
 * v +
 *  
 ******************************/

#include"lcd_st7567s.h"


//create an lcd object.
lcd_st7567s Lcd;



/////////////////////////////////////////////////////////
void setup() {
  //Serial.begin(115200);
  Lcd.Init();
  
}

/////////////////////////////////////////////////////////
void loop() {

  Lcd.testPixel(2);                   //use to test LCD screen. Parameter is velocity.
  
 

/**/  
  Lcd.Cursor(7, 0);                    //Character display position. y=0-3, x=0-17
  Lcd.Display("ABCDOPQR");               //Maximun 18 characters.
  Lcd.Cursor(0, 1);
  Lcd.Display("ABCDOPQR");
  Lcd.Cursor(0, 2);
  Lcd.Display("123456789+-*/<>=$@");
  Lcd.Cursor(0, 3);
  Lcd.Display("%^&(){}:;'|?,.~\\[]");
  Lcd.Cursor(0, 4);
  Lcd.Display("ABCDOPQR");
  Lcd.Cursor(0, 5);
  Lcd.Display("123456789+-*/<>=$@");
  Lcd.Cursor(0, 6);
  Lcd.Display("%^&(){}:;'|?,.~\\[]");
  Lcd.Cursor(0, 7);
  Lcd.Display("ABCDEFGHIJR");
  delay(50000);
  Lcd.Clear(false);                        //All pixels turn off.
  
  Lcd.DisplayPicture();               //Displays the image data for the picture.c file
  delay(500);

}
