#include <iostream>
using namespace std;
#include "Shape.h"
#include "Triangle.h"
#include "graph1.h"

Triangle::Triangle()
{
	a.setPoint(0, 0);
	b.setPoint(0, 0);
	c.setPoint(0, 0);
}

Triangle::Triangle(GenPoint a, GenPoint b, GenPoint c, Color color)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->color = color;
}

void Triangle::setPoints(GenPoint a, GenPoint b, GenPoint c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

double Triangle::getArea()
{
	double side1 = b.getX() - a.getX();
	double side2 = c.getY() - a.getY();
	double side3 = c.getY() - b.getY();

	double s = (side1 + side2 + side3) / 2.0;

	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	return area;
}

double Triangle::getPerimeter()
{
	double side1 = sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2));
	double side2 = sqrt(pow((c.getX() - b.getX()), 2) + pow((c.getY() - b.getY()), 2));
	double side3 = sqrt(pow((a.getX() - c.getX()), 2) + pow((a.getY() - c.getY()), 2));

	double perimeter = side1 + side2 + side3;
	return perimeter;
}

void Triangle::print()
{
	gout << setPos(200, 405) << "Shape info for Triangle" << endg;
	gout << setPos(200, 420) << "Point a: " << a.getX() << ", " << a.getY() << endg;
	gout << setPos(200, 435) << "Point b: " << b.getX() << ", " << b.getY() << endg;
	gout << setPos(200, 450) << "Point c: " << c.getX() << ", " << c.getY() << endg;
	gout << setPos(200, 465) << "Perimeter: " << getPerimeter() << endg;
	gout << setPos(200, 480) << "Area: " << getArea() << endg;
}

void Triangle::draw()
{
	int obj = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
	obj = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
	obj = drawLine(c.getX(), c.getY(), a.getX(), a.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());

}