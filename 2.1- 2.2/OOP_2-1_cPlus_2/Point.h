#pragma once
class Point
{
protected:
	double xA, yA;
public:
	void set_xA(double xA);
	void set_yA(double yA);
};

class Line: public Point
{
protected:
	double xB, yB;
public:
	void set_xB(double xB);
	void set_yB(double yB);
	double length_line();
};

class Ellipse : public Line
{
private:
	double xO, yO;
	double x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D;
public:
	Ellipse()
	{
		x_A = 1;
		y_A = 1;

		x_B = 5;
		y_B = 3;

		x_C = 1;
		y_C = 5;

		x_D = -5;
		y_D = 3;
	}

	void set_O();
	double set_smaller_radius();
	double set_bigger_radius();
	double set_area(double r1, double r2);
	double eccentricity(double focus, double half_bigger_r);
	double get_x_A();
	double get_x_C();

};