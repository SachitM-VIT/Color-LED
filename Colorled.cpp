#include "Arduino.h"
#include "Colorled.h"


Colorled::Colorled(int pin1,int pin2,int pin3)
{

red=pin1;      	//1
green=pin2;	//3
blue=pin3;		//4
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);  
}

void Colorled::setColor(int r, int g ,int b)
{
  #ifdef COMMON_ANODE
    r= 255 - r;
    g = 255 - g;
    b = 255 - b;
  #endif
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);  
}


void Colorled::ledcolor(char col[])
{
if(strcmp(col,"red")==0)
{
setColor(255, 0, 0);
}
else if(strcmp(col,"green")==0)
{
setColor(0, 255, 0);
}
else if(strcmp(col,"blue")==0)
{
 setColor(0, 0, 255);
}
else if(strcmp(col,"yellow")==0)
{
 setColor(255, 255, 0);  // yellow
}
else if(strcmp(col,"purple")==0)
{
 setColor(80, 0, 80);  // purple
}
else if((strcmp(col,"aqua")==0)||(strcmp(col,"cyan")==0))
{
 setColor(0, 255, 255);  // aqua/cyan
}
}


void Colorled::toggle(int tim)
  {
setColor(255, 0, 0);  // red
  delay(tim);
  setColor(0, 255, 0);  // green
  delay(tim);
  setColor(0, 0, 255);  // blue
  delay(tim);
  setColor(255, 255, 0);  // yellow
  delay(tim);
  setColor(80, 0, 80);  // purple
  delay(tim);
  setColor(0, 255, 255);  // aqua
  delay(tim);
}

void Colorled::blink(int tim)
  {
setColor(255, 0, 0);  // red
  delay(tim);
  ledoff();
  delay(tim);
  setColor(0, 255, 0);  // green
  delay(tim);
  ledoff();
  delay(tim);
  setColor(0, 0, 255);  // blue
  delay(tim);
  ledoff();
  delay(tim);
  setColor(255, 255, 0);  // yellow
  delay(tim);
  ledoff();
  delay(tim);
  setColor(80, 0, 80);  // purple
  delay(tim);
  ledoff();
  delay(tim);
  setColor(0, 255, 255);  // aqua
  delay(tim);
  ledoff();
  delay(tim);
}


void Colorled::ledoff()
{
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue,0);  
}

