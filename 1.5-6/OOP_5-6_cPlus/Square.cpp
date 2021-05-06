#pragma once
#include "Square.h"
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


bool Square::operator <= (const Square& value)
{
	return this->ab <= value.ab;
}

Square& Square::operator *(const Square& value)
{
	if (value.xA > value.yA)
	{
		this->xA = this->xA * value.yA;
		this->xB = this->xB * value.yA;
		this->xC = this->xC * value.yA;
		this->xD = this->xD * value.yA;
		this->yA = this->yA * value.yA;
		this->yB = this->yB * value.yA;
		this->yC = this->yC * value.yA;
		this->yD = this->yD * value.yA;
		cout << "A:" << xA << " " << yA << " B:" << xB << " " << yB << " C:" << xC << " " << yC << " D:" << xD << " " << yD << endl;
	}
	else
	{
		this->xA = this->xA * value.xA;
		this->xB = this->xB * value.xA;
		this->xC = this->xC * value.xA;
		this->xD = this->xD * value.xA;
		this->yA = this->yA * value.xA;
		this->yB = this->yB * value.xA;
		this->yC = this->yC * value.xA;
		this->yD = this->yD * value.xA;
		cout << "A:" << xA << " " << yA << " B:" << xB << " " << yB << " C:" << xC << " " << yC << " D:" << xD << " " << yD << endl;
	}
	return *this;
}

Square& Square::operator ++()
{
	xA++;
	xB++;
	xC++;
	xD++;
	yA++;
	yB++;
	yC++;
	yD++;
	cout << "A:" << xA << " " << yA << " B:" << xB << " " << yB << " C:" << xC << " " << yC << " D:" << xD << " " << yD << endl;
	return *this;
}

Square& Square::operator !()
{
	if ((xA == yA and xB == yD) and (yB == xC and yC == xD))
	{
		cout << "Це квадрат!!!" << endl;
	}
	else
	{
		cout << "Це не квадрат!!!" << endl;
	}
	return *this;
}

Square& Square::operator +(const double value)
{
	xA += value;
	xB += value;
	xC += value;
	xD += value;
	yA += value;
	yB += value;
	yC += value;
	yD += value;
	cout << "A:" << xA << " " << yA << " B:" << xB << " " << yB << " C:" << xC << " " << yC << " D:" << xD << " " << yD << endl;
	return *this;
}





