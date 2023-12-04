
#include "graphics.h"
#include <math.h>
#define WIDTH 800
#define HEIGHT 600
#ifndef ASUN_HPP
#define ASUN_HPP



void asun(int x1, int y1)//Метеорит
{
   setcolor(RED);
   setlinestyle(SOLID_LINE, 0, 11);
   setfillstyle(SOLID_FILL,RED);
fillellipse(x1,y1,30,30);
line(x1,y1,x1,y1-60);
line(x1,y1,x1-60,y1);
line(x1-80, y1-80, x1-10, y1-50);
line(x1-80 ,y1-80, x1-50, y1-10);
line(x1-10 ,y1-50, x1, y1-60);
line(x1-50 ,y1-10, x1-60, y1);
}

#endif