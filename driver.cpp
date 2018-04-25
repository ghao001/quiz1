/*
 * driver.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: Howard
 */
#include"Circle.h"
#include<iostream>
using namespace std;
int main()
{
	Circle circle;
	cout<<"Enter a radius: ";
	double r;
	cin>>r;
	circle.setRadius(r);
	cout<<"area: "<<circle.getArea()<<endl;
	cout<<"Diameter: "<<circle.getDiameter()<<endl;
	cout<<"Circumference: "<<circle.getCircumference()<<endl;
}

