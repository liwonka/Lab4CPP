
#include "graphics.h"
#include <math.h>
#define WIDTH 800
#define HEIGHT 600
#ifndef TREE_HPP
#define TREE_HPP



void tree()
{
   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(200,250,100,200);
   setcolor(BROWN);
   setfillstyle(SOLID_FILL,BROWN);
   int p[6]={180, 550,220, 550,200,350};
   fillpoly(3,p);
}
#endif