#ifndef GENRECTANGLE_H
#define GENRECTANGLE_H

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

class GenRectangle : public Quadrilateral
{

public:
    GenRectangle();
    GenRectangle(GenPoint ul, GenPoint lr, Color c);
    void setPoints(GenPoint ul, GenPoint lr);
    double getArea();
    void print();
};

#endif

#pragma once
