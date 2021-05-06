#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Ellipse ellipse;
	double smaller_radius, bigger_radius, e;
	double area;
	double xA, yA, xB, yB;
	cout << "Введість координтаи для вокусної відстані A:";
	cin >> xA >> yA;
	cout << "B:";
	cin >> xB >> yB;
	ellipse.set_xA(xA);
	ellipse.set_yA(yA);
	ellipse.set_xB(xB);
	ellipse.set_yB(yB);
	ellipse.set_O();
	smaller_radius = ellipse.set_smaller_radius();
	bigger_radius = ellipse.set_bigger_radius();
	area = ellipse.set_area(smaller_radius, bigger_radius);
	e = ellipse.eccentricity(ellipse.length_line(), bigger_radius / 2);
	while(true)
	{
		if ((e < 0 or e > 1) or (xA != ellipse.get_x_A() or xB != ellipse.get_x_C()))
		{
			cout << "Це не елiпс" << endl;
			break;
		}
		cout << "Ексетрацитет елiпса(ростяжнiсть елiпса норма вiд 0 до 1)):" << e << endl;
		cout << "Бiльший радiус = " << bigger_radius << endl;
		cout << "Менший радiус = " << smaller_radius << endl;
		cout << "Фокусна вiдстань = " << ellipse.length_line() << endl;
		cout << "Площа елiпса = " << area << endl;
		break;
	}
}


