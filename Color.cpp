
#include <iostream>
#include <cmath>
#include "Color.h" 
#include "graph1.h" 

using namespace std;

Color::Color()
{
  setColor(0,0,0);
}

Color::Color(int r, int g, int b)
{
  setColor(r,g,b);
}

void Color::setCol(int r, int g, int b)
{
  this->r = r;
  this->g = g;
  this->b = b;
}

int Color::getRed()
{
  return(r);
}

int Color::getGreen()
{
  return(g);
}

int Color::getBlue()
{
  return(b);
}

void Color::draw(int x, int y, int w, int h)
{
  int obj_no = drawRect(x,y,w,h);
  ::setColor(obj_no,r,g,b);
  
}
