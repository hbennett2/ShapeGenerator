
#include <iostream>
#include "graph1.h"
#include <cmath>
#include "Color.h"
#include "GenRectangle.h"
using namespace std;

GenRectangle::GenRectangle() : Quadrilateral()
{
	
}

GenRectangle::GenRectangle(GenPoint lr, GenPoint ul, Color c)
{
	this->a.setPoint(ul.getX(), ul.getY());
	this->c.setPoint(lr.getX(), lr.getY());
	this->b.setPoint(lr.getX(), ul.getY());
	this->d.setPoint(ul.getX(), lr.getY());

}

void GenRectangle::setPoints(GenPoint ul, GenPoint lr)
{
	a.setPoint(ul.getX(), ul.getY());
	c.setPoint(lr.getX(), lr.getY());
	b.setPoint(lr.getX(), ul.getY());
	d.setPoint(ul.getX(), lr.getY());

	Quadrilateral::setPoints(a, b, c, d);
}

double GenRectangle::getArea()
{
	double area = 0;
	// shoelace formula to calc area
	area = 0.5 * (a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * d.getY() + d.getX() * a.getY() -
		a.getY() * b.getX() - b.getY() * c.getX() - c.getY() * d.getX() - d.getY() * a.getX());

	return area;
}

void GenRectangle::print()
{
	gout << setPos(200, 405) << "Shape info for Quadrilateral" << endg;
	gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
	gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
	gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
	gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
	gout << setPos(200, 480) << "Perimeter: " << setPrecision(2) << getPerimeter() << endg;

	gout << setPos(200, 20) << "Rectangle Information" << endg;
	gout << setPos(200, 35) << "Area: " << setPrecision(2) <<  getArea() << endg;

	
}