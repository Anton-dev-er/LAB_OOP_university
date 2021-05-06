#pragma once
#include "square.h"
#include <cmath>
#include <iostream>

using namespace std;
class Square
{
private:
	double xA, xB, xC, xD, yA, yB, yC, yD;
	double ab, bc, cd, ad;
public:
	Square()
	{
		xA = 1;
		yA = 1;
		xB = 1;
		yB = 3;
		xC = 3;
		yC = 3;
		xD = 3;
		yD = 1;
	}

	Square(double ab, double bc, double cd, double ad)
	{
		this->ab = ab;
		this->bc = bc;
		this->cd = cd;
		this->ad = ad;
	}

	double SideAB();
	double SideBC();
	double SideCD();
	double SideAD();

	double AreaForArr();
	double PerimetrForArr();

	void set_xA(double xA)
	{
		this->xA = xA;
	}
	void set_yA(double yA)
	{
		this->yA = yA;
	}
	void set_xB(double xB)
	{
		this->xB = xB;
	}
	void set_yB(double yB)
	{
		this->yB = yB;
	}
	void set_xC(double xC)
	{
		this->xC = xC;
	}
	void set_yC(double yC)
	{
		this->yC = yC;
	}
	void set_xD(double xD)
	{
		this->xD = xD;
	}
	void set_yD(double yD)
	{
		this->yD = yD;
	}

	~Square() {};
};