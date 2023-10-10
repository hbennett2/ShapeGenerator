#include <iostream>
#include "graph1.h"
#include "Shape.h"
using namespace std;

Shape::Shape()
{
	color.setCol(0, 0, 0);
}

void Shape::setCol(Color color)
{
	this->color = color;
}

Color Shape::getColor()
{
	return color;
}



