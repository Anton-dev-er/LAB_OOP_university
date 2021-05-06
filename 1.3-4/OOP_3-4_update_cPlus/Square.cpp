#pragma once
#include "square.h"
#include <cmath>
#include <iostream>
using namespace std;

double Square::SideAB()
{
	ab = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	return ab;
	
}

double Square::SideBC()
{
	bc = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
	return bc;
}

double Square::SideCD()
{
	cd = sqrt(pow(xD - xC, 2) + pow(yD - yC, 2));
	return cd;
}

double Square::SideAD()
{
	ad = sqrt(pow(xD - xA, 2) + pow(yD - yA, 2));
	return ad;
}

double Square::AreaForArr()
{
	double area = pow(ab, 2);
	return area;
	
}

double Square::PerimetrForArr()
{
	double perimetr = ab * 4;
	return perimetr;
}
