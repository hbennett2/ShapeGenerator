#include <iostream>
#include "Circle.h"
#include "graph1.h"
using namespace std;
#include <cmath>

Circle::Circle()
{
	radius = 0;
	GenPoint center(0, 0);
	
}

const double Circle::PI = 3.14159; 

Circle::Circle(GenPoint center, int radius, Color c)
{
	this->center = center;
	this->radius = radius;
	this->color = c;
}

void Circle::setCenter(GenPoint center)
{
	this->center = center;
}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

double Circle::getPerimeter()
{
	double perimeter = 2 * PI * radius;

	return perimeter;

}

double Circle::getArea()
{
	double area = PI * (radius * radius);
	return area;
}

void Circle::draw()
{
	int obj=  drawCircle(radius, center.getX(), center.getY());
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
}

void Circle::print()
{
	gout << setPos(200, 405) << "Shape info follows for: Circle" << endg;
	gout << setPos(200, 420) << "center point: (" << center.getX() << ", " << center.getY() << ")" << endg;
	gout << setPos(200, 435) << "Radius: " << radius << endg;
	gout << setPos(200, 450) << "Perimeter: " << getPerimeter() << endg;
}