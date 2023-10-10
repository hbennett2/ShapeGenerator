#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <iostream>
using namespace std;
class Triangle : public Shape
{
protected:
    GenPoint a;
    GenPoint b;
    GenPoint c;

public:

    Triangle();
    Triangle(GenPoint a, GenPoint b, GenPoint c, Color color);
    void setPoints(GenPoint a, GenPoint b, GenPoint c);
    double getArea();
    double getPerimeter();
    void print();
    void draw();

};

#endif
#pragma once
