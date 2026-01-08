/****************************
 * use to ST7567A 128*32 dot LCD.
 * progranmmer: Jex Mo
 * Version: V1.0
 * date: 2020-12-4
 * URL: https://github.com/mworkfun/ST7567A_128X32DOT_LCD
 ****************************/
#include <avr/pgmspace.h> 

/********************************************************
 * picture pixel table                                                  
 * picture: 
 * x y---------------------> + 128
 * |                    |
 * |                    |
 * |---------------------
 * | +
 * v 32                                              
 ********************************************************/
const int picture[] PROGMEM ={
      0x04,0x0a,0x11,0x11,0x11,0x1f,0x11,0x11
};
