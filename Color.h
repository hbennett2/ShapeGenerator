#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;
class Color
{
  private:
    int r;
    int g;
    int b;

  public:
    Color();
    Color(int r, int g, int b);
    void setCol(int r, int g, int b);
    int getRed();
    int getGreen();
    int getBlue();
    void draw(int x, int y, int w, int h);
};

#endif
    