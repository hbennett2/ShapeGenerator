
#include <iostream>
#include "graph1.h"
#include "Quadrilateral.h"
#include "GenPoint.h"
#include <cmath>
using namespace std;

Quadrilateral::Quadrilateral()
{
	a.setPoint(0, 0);
	b.setPoint(0, 0);
	c.setPoint(0, 0);
	d.setPoint(0, 0);
	color.setCol(0, 0, 0);
}
Quadrilateral::Quadrilateral(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->color = color;
}
void Quadrilateral::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
	// a points
	if (a.getX() < 0)
		this->a.setPoint(0, a.getY());
	else if (a.getX() > 639)
		this->a.setPoint(639, a.getY());
	else
		this->a.setPoint(a.getX(), a.getY());

	if (a.getY() < 0)
		this->a.setPoint(a.getX(), 0);
	else if (a.getY() > 339)
		this->a.setPoint(a.getX(), 339);
	else
		this->a.setPoint(a.getX(), a.getY());

	// b points
	if (b.getX() < 0)
		this->b.setPoint(0, b.getY());
	else if (b.getX() > 639)
		this->b.setPoint(639, b.getY());
	else
		this->b.setPoint(b.getX(), b.getY());

	if (b.getY() < 0)
		this->b.setPoint(b.getX(), 0);
	else if (b.getY() > 339)
		this->b.setPoint(b.getX(), 339);
	else
		this->b.setPoint(b.getX(), b.getY());

	// c points
	if (c.getX() < 0)
		this->c.setPoint(0, c.getY());
	else if (c.getX() > 639)
		this->c.setPoint(639, c.getY());
	else
		this->c.setPoint(c.getX(), c.getY());

	if (c.getY() < 0)
		this->c.setPoint(c.getX(), 0);
	else if (c.getY() > 339)
		this->c.setPoint(c.getX(), 339);
	else
		this->c.setPoint(c.getX(), c.getY());

	// d points
	if (d.getX() < 0)
		this->d.setPoint(0, d.getY());
	else if (d.getX() > 639)
		this->d.setPoint(639, d.getY());
	else
		this->d.setPoint(d.getX(), d.getY());

	if (d.getY() < 0)
		this->d.setPoint(d.getX(), 0);
	else if (d.getY() > 339)
		this->d.setPoint(d.getX(), 339);
	else
		this->d.setPoint(d.getX(), d.getY());

}


double Quadrilateral::getPerimeter()
{
	double perimeter = 0;
	int distances[4];

	distances[0] = sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2));
	distances[1] = sqrt(pow((c.getX() - b.getX()), 2) + pow((c.getY() - b.getY()), 2));
	distances[2] = sqrt(pow((d.getX() - c.getX()), 2) + pow((d.getY() - c.getY()), 2));
	distances[3] = sqrt(pow((a.getX() - d.getX()), 2) + pow((a.getY() - d.getY()), 2));

	for (int i = 0; i < 4; i++)
	{
		perimeter += distances[i];
	}

	return perimeter;
}

void Quadrilateral::print()
{
	gout << setPos(200, 405) << "Shape info for Quadrilateral" << endg;
	gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
	gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
	gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
	gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
	gout << setPos(200, 480) << "Perimeter: " << setPrecision(2) <<  getPerimeter() << endg;

}

void Quadrilateral::draw()
{
	int obj;
	obj = drawLine(a.getX(), a.getY(),b.getX(), b.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
	obj = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
	obj = drawLine(c.getX(), c.getY(), d.getX(), d.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());
	obj = drawLine(d.getX(), d.getY(), a.getX(), a.getY(), 1);
	setColor(obj, color.getRed(), color.getGreen(), color.getBlue());

}