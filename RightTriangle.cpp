
#include <iostream>
using namespace std;
#include "RightTriangle.h"
#include "Triangle.h"
#include "graph1.h"
RightTriangle::RightTriangle() : Triangle()
{
	
}

RightTriangle::RightTriangle(GenPoint vertex, int height, int base, Color color)
{
	this->color = color;
	base = c.getX() - a.getX();
	height = b.getY() - a.getY();
	vertex.setPoint(a.getX(), a.getY());
}

void RightTriangle::print()
{
	gout << setPos(0, 20) << "Right Triangle" << endg;

	gout << setPos(200, 405) << "Shape info for Triangle" << endg;
	gout << setPos(200, 420) << "Point a: " << a.getX() << ", " << a.getY() << endg;
	gout << setPos(200, 435) << "Point b: " << b.getX() << ", " << b.getY() << endg;
	gout << setPos(200, 450) << "Point c: " << c.getX() << ", " << c.getY() << endg;
	gout << setPos(200, 465) << "Perimeter: " << getPerimeter() << endg;
	gout << setPos(200, 480) << "Area: " << getArea() << endg;
}