#include "Trapezoid.h"
#include "Color.h"
#include <iostream>
#include "graph1.h"
using namespace std;

Trapezoid::Trapezoid() : Quadrilateral()
{
    // Call the default constructor of the base class Quadrilateral

}

// Parametrized constructor implementation
Trapezoid::Trapezoid(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color) 
{
    // Call the parametrized constructor of the base class Quadrilateral
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->color = color;
}

// setPoints implementation
void Trapezoid::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
    this->a.setPoint(a.getX(), a.getY());
    this->b.setPoint(b.getX(), b.getY());
    this->c.setPoint(c.getX(), c.getY());
    this->d.setPoint(d.getX(), d.getY());

}

// getArea implementation
double Trapezoid::getArea()
{
    // Calculate the length of the bases and height
    double base1 = b.getX() - a.getX();
    double base2 = c.getX() - d.getX();
    double height = c.getY() - b.getY();

    // Calculate and return the area of the trapezoid
    double area = 0.5 * (base1 + base2) * height;
    return area;
}

// print implementation
void Trapezoid::print()
{
    // Print the textual information of the Trapezoid in the graphics window
    gout << setPos(0, 15) << "Trapezoid Information: " << endg;
    gout << setPos(0, 30) << "Area: " << getArea() << endg;
    gout << setPos(200,405) << "Trapezoid: " << endg;
    gout << setPos(200, 420) << "Point a: " << a.getX() << ", " << a.getY() << endg;
    gout << setPos(200, 435) << "Point b: " << b.getX() << ", " << b.getY() << endg;
    gout << setPos(200, 450) << "Point c: " << c.getX() << ", " << c.getY() << endg;
   gout << setPos(200, 465) << "Point d: " << d.getX() << ", " << d.getY() << endg;
    gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << endg;
    
}