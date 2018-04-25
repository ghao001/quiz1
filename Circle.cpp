/*
 * Circle.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: Howard
 */
#include"Circle.h"

//Default constructor
Circle::Circle()
{
	radius=0;
	pi=3.14159;
}

//constructor
Circle::Circle(double r)
{
	radius=r;
	pi=3.14159;
}


//setter of radius
void Circle::setRadius(double r)
{
	radius=r;
}

//getter of radius
//@return radius
double Circle::getRadius()
{
	return radius;
}

//getter of area
//@return area
double Circle::getArea()
{
	return radius*radius*pi;
}

//getter of diameter
//@return diameter
double Circle::getDiameter()
{
	return radius*2;
}

//getter of circumference
//@return circumference
double Circle::getCircumference()
{
	return 2*pi*radius;
}
