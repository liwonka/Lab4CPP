#include "graphics.h"
#include "picture.hpp"
int main()
{ initwindow(800,600);
  house(400,300);
  sun(); 
  man();
  fence();
  // tree();
  getch();
  closegraph();
}