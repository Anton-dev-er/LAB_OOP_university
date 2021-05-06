#pragma once
class Line
{
protected:
	int lenght;
	int xA, yA, xB, yB;

public:
	void set_xA(int xA);
	void set_yA(int yA);
	void set_xB(int xA);
	void set_yB(int yA);
	int length_line();
	~Line() {};
};

class Segment: public Line
{
public:
	Segment() {};
	Segment(int xA, int yA, int xB, int yB);
	int get_xA();
	int get_yA();
	int get_xB();
	int get_yB();
	int length_line_x2(int len);
	~Segment() {};
};
