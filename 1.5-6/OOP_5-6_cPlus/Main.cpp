#include <iostream>
#include "Square.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <Windows.h>
using namespace std;

void Square1();
void Square2();
void Check_the_square(double& ab, double& bc, double& cd, double& ad);

int main()
{
	SetConsoleOutputCP(1251);

	cout << "\n====Параметри за замовчуванням====" << endl;
	Square square1;
	double ab = square1.SideAB();
	double bc = square1.SideBC();
	double cd = square1.SideCD();
	double ad = square1.SideAD();
	Check_the_square(ab, bc, cd, ad);
	
	cout << "\n====Введжені параметри====" << endl;
	double xA{}, yA{}, xB{}, yB{}, xC{}, yC{}, xD{}, yD{};

	cout << "Введіть вершину А(Через пробел)):";
	cin >> xA >> yA;
	cout << "Введіть вершину B(Через пробел)):";
	cin >> xB >> yB;
	cout << "Введіть вершину C(Через пробел)):";
	cin >> xC >> yC;
	cout << "Введіть вершину D(Через пробел)):";
	cin >> xD >> yD;

	Square square2;
	square2.set_xA(xA);
	square2.set_xB(xB);
	square2.set_xC(xC);
	square2.set_xD(xD);
	square2.set_yA(yA);
	square2.set_yB(yB);
	square2.set_yC(yC);
	square2.set_yD(yD);

	double ab1 = square2.SideAB();
	double bc1 = square2.SideBC();
	double cd1 = square2.SideCD();
	double ad1 = square2.SideAD();
	Check_the_square(ab1, bc1, cd1, ad1);
	cout << "Введіть число:";
	double value = 0;
	double value1 = 0;
	cin >> value;
	cout << "\ndouble + Square – додати значення double до координат квадрата" << endl;
	square1 = square1 + value;

	/*cout << "Введіть число:";
	cin >> value1;
	cout << "\nSquare + double – додати значення double до координат квадрата" << endl;
	square1 = value1 + square1;*/

	cout << "\nДомножити меншу координату другого квадрату до першого" << endl;
	square1 = square1 * square2;

	cout << "\nІнкрементація координта другого квадрата" << endl;
	++square2;

	cout << "\nПеревірка на квадрат" << endl;
	!square2;

	//Перевірка на периметр
	bool result = square1 <= square2;
	if (!result)
	{
		cout << "\nПериметр більший у першого квадрата" << endl;
	}
	else
	{
		cout << "\nПериметр більший у другого квадрата" << endl;
	}


}

void Check_the_square(double& ab, double& bc, double& cd, double& ad)
{
	if (ab == bc and ab == cd and ab == ad)
	{
		cout << "Периметр: " << ab + bc + cd + ad << endl;
		cout << "Площа: " << pow(ab, 2) << endl;
	}
	else
	{
		cout << "\nНеправильно введені для квадрата координати." << endl << "Спробуйте ще раз!" << endl << endl;
	}
}