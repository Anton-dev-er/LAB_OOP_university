#pragma once
#include <cmath>
#include <iostream>

using namespace std;
class Square
{
private:
	double ab, bc, cd, ad;
	double xA, xB, xC, xD, yA, yB, yC, yD;
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


	

	double SideAB();
	double SideBC();
	double SideCD();
	double SideAD();

	bool operator <=(const Square& value);

	Square& operator *(const Square& value);
	
	Square& operator ++();
	
	Square& operator !();
	
	Square& operator +(const double value);
	
	/*Square& operator +(const Square& value)
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
	}*/





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