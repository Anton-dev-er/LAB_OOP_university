#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

template <typename T>
class Ellipsis 
{
private:
	T bigger_axis, smaller_axis;
	double F, Eccentricity;

	void SetParameters()
	{
		Eccentricity = (F / 2) / (bigger_axis / 2);
		if ((Eccentricity > 0 and Eccentricity < 1) == false)
		{
			cout << "Неправильно введені параметри, будуть встановленні дефолтні параметри" << endl;
			Point <T>p;
			bigger_axis = 40;
			smaller_axis = 20;
		}
	}
public:

	Ellipsis(T xF1, T yF1, T xF2, T yF2, T bigger_axis, T smaller_axis)
	{
		Point<T> p(xF1, yF1, xF2, yF2, ((xF1 + xF2) / 2), ((yF1 + yF2) / 2));
		this->bigger_axis = bigger_axis;
		this->smaller_axis = smaller_axis;
		F = p.SetSide(p.xF1, p.yF1, p.xF2, p.yF2);
		SetParameters();
		
	}

	Ellipsis() { Point <T>p; }

	double Sarea() { return 3.14 * (bigger_axis / 2) * (smaller_axis / 2); }

	double Perimetr()
	{
		double a = bigger_axis / 2;
		double b = smaller_axis / 2;
		return 4 * ((3.14 * a * b) + (a - b) / (a + b));
	}

	void ChangeEllipsis(T xF1, T yF1, T xF2, T yF2, T bigger_axis, T smaller_axis)
	{
		Point<T> p(xF1, yF1, xF2, yF2, ((xF1 + xF2) / 2), ((yF1 + yF2) / 2));
		this->bigger_axis = bigger_axis;
		this->smaller_axis = smaller_axis;
		F = p.SetSide(p.xF1, p.yF1, p.xF2, p.yF2);
		SetParameters();
	}
};

