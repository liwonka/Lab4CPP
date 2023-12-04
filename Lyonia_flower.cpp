
#include "picture.hpp"
#include "graphics.h"
#include <math.h>

const int WIDTH=800;
const int HEIGHT=600;

void flower(int x, int y)
{
   setcolor(COLOR(173, 255, 47));
   moveto(650, 550);                      
   lineto(650, 480);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(x, y, 6, 6);
   setfillstyle(SOLID_FILL, COLOR(255, 20, 147));
   fillellipse(x, y-14, 8, 8);
   fillellipse(x, y+14, 8, 8);
   fillellipse(x+11, y+7, 7, 7);
   fillellipse(x+10, y-7, 7, 7);
   fillellipse(x-11, y+7, 7, 7);
   fillellipse(x-10, y-7, 7, 7);
   setfillstyle(SOLID_FILL, COLOR(173, 255, 47));
   fillellipse(x+10, y+40, 10, 6);
   fillellipse(x-10, y+40, 10, 6);
}
