#include "picture.hpp"
#include "graphics.h"
#include <math.h>

const int WIDTH=800;
const int HEIGHT=600;

void sun(int x, int y)//������
{
   setcolor(YELLOW);
   setlinestyle(SOLID_LINE, 0, 2);
   setfillstyle(SOLID_FILL,YELLOW);
   fillellipse(x,y,30,30);//������ 
   for(int i=0;i<10;++i)//���-�� �������
{
   line(x,y,x+60*cos(2*acos(-1)*(i/10.0+x/600.0)),y-60*sin(2*acos(-1)*(i/10.0+x/600.0)));
     }
}