/*
 * Circle.h
 *
 *  Created on: Apr 24, 2018
 *      Author: Howard
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
class Circle
{
private:
	double radius;
	double pi;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
};




#endif /* CIRCLE_H_ */
