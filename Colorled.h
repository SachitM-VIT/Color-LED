/*  
Colorled.h - Library for handling multicolored LED.
  Created by Sachit Mahajan, July 2, 2015.
  Released into the public domain.
*/
#ifndef Colorled_h
#define Colorled_h

#include "Arduino.h"

class Colorled
{
  public:
    Colorled(int pin1,int pin2,int pin3);
    void setColor(int r, int g, int b);
    void ledcolor(char col[]);
    void toggle(int tim);
    void blink(int tim);
//    void fade(char col[],int tim);

    void ledoff();
  private:
    int red;
    int green;
    int blue;
//char lcol[10];
};

#endif