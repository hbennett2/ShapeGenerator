#include "GenPoint.h"
#include "Color.h"
#include "Shape.h"
#include <iostream>
using namespace std;
class Quadrilateral : public Shape
{
protected:

    GenPoint a;
    GenPoint b;
    GenPoint c;
    GenPoint d;


public:
    Quadrilateral();
    Quadrilateral(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color);
    void setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d);
    double getPerimeter();
    void print();
    void draw();
};

#pragma once