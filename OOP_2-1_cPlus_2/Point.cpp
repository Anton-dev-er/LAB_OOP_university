#include "Point.h"
#include <math.h>
#include <iostream>

void Point::set_xA(double xA)
{
	this->xA = xA;
}

void Point::set_yA(double yA)
{
	this->yA = yA;
}

void Line::set_xB(double xB)
{
	this->xB = xB;
}

void Line::set_yB(double yB)
{
	this->yB = yB;
}

double Line::length_line()
{
	double lenght = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	return lenght;
}

void Ellipse::set_O()
{
	double xO = (x_A + x_C) / 2;
	double yO = (y_A + y_C) / 2;
	std::cout << "Координати центра: " << xO << " " << yO << std::endl;
}

double Ellipse::set_smaller_radius()
{
	return sqrt(pow(x_C - x_A, 2) + pow(y_C - y_A, 2));
}

double Ellipse::set_bigger_radius()
{
	return sqrt(pow(x_D - x_B, 2) + pow(y_D - y_B, 2));
}

double Ellipse::set_area(double r1, double r2)
{
	return 3.14 * (r1 / 2) * (r2 / 2);
}

double Ellipse::eccentricity(double focus, double half_bigger_r)
{
	return focus / half_bigger_r;
}

double Ellipse::get_x_A()
{
	return x_A;
}

double Ellipse::get_x_C()
{
	return x_C;
}
