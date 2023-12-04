#include "graphics.h"
#include "picture.hpp"
#include "asun.hpp"
#include "house.hpp"
#include "flower.hpp"
#include "tree.hpp"
int main()
{ initwindow(800,600);
   asun(100,100);
   house();
   flower(400, 400);
   tree();
  getch();
  closegraph();
}