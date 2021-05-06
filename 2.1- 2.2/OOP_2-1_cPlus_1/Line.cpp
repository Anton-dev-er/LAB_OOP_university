#include "Line.h"
#include <math.h>
#include <iostream>
using namespace std;




void Line::set_xA(int xA)
{

	this->xA = xA;
}

void Line::set_yA(int yA)
{
	this->yA = yA;

}

void Line::set_xB(int xB)
{
	this->xB = xB;
}

void Line::set_yB(int yB)
{
	this->yB = yB;
}

Segment::Segment(int xA, int xB, int yA, int yB)
{
	this->xA = xA;
	this->xB = xB;
	this->yA = yA;
	this->yB = yB;

};

int Line::length_line()
{
	int lenght = sqrt(pow(yA - xA, 2) + pow(yB - xB, 2));
	return lenght;
}

int Segment::length_line_x2(int len)
{
	return len * 2;
};

int Segment::get_xA() 
{
	return xA;
}

int Segment::get_yA() 
{
	return yA;
}

int Segment::get_xB() 
{
	return xB;
}

int Segment::get_yB() 
{
	return yB;
}
