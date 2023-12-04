#include "picture.hpp"
#include "graphics.h"
#include <math.h>

const int WIDTH=800;
const int HEIGHT=600;

void tree(int x, int y)
{
   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(200,250,100,200);
   setcolor(BROWN);
   setfillstyle(SOLID_FILL,BROWN);
   int p[6]={180, 550,220, 550,200,350};
   fillpoly(3,p);
}
