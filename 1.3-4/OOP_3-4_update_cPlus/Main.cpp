#include <iostream>
#include "Square.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void Square1();
void Square2();
void Check_the_square(double& ab, double& bc, double& cd, double& ad);
void SetMass(Square* arr);

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "\n====������====" << endl;
	Square arr[22];
	SetMass(arr);
	for (int i = 0; i < 22; i++)
	{
		cout << i + 1 << ".��������:" << arr[i].PerimetrForArr() << "\t�����:" << arr[i].AreaForArr() << endl;

	}

	cout << "\n====��������� �� �������������====" << endl;
	Square1();

	cout << "\n====������� ���������====" << endl;
	Square2();
}

void Check_the_square(double& ab, double& bc, double& cd, double& ad)
{
	if (ab == bc and ab == cd and ab == ad)
	{
		cout << "��������: " << ab + bc + cd + ad << endl;
		cout << "�����: " << pow(ab, 2) << endl;
	}
	else
	{
		cout << "\n����������� ������ ��� �������� ����������." << endl <<"��������� �� ���!" << endl << endl;
		Square2();
	}
}

void Square1()
{
	Square square1;
	double ab = square1.SideAB();
	double bc = square1.SideBC();
	double cd = square1.SideCD();
	double ad = square1.SideAD();
	Check_the_square(ab, bc, cd, ad);
}

void Square2()
{
	double xA{}, yA{}, xB{}, yB{}, xC{}, yC{}, xD{}, yD{};

	cout << "������ ������� �(����� ������)):";
	cin >> xA >> yA;
	cout << "������ ������� B(����� ������)):";
	cin >> xB >> yB;
	cout << "������ ������� C(����� ������)):";
	cin >> xC >> yC;
	cout << "������ ������� D(����� ������)):";
	cin >> xD >> yD;

	cout << "\n====������� ���������====" << endl;
	Square square2;
	square2.set_xA(xA);
	square2.set_xB(xB);
	square2.set_xC(xC);
	square2.set_xD(xD);
	square2.set_yA(yA);
	square2.set_yB(yB);
	square2.set_yC(yC);
	square2.set_yD(yD);

	double ab = square2.SideAB();
	double bc = square2.SideBC();
	double cd = square2.SideCD();
	double ad = square2.SideAD();
	Check_the_square(ab, bc, cd, ad);

}

void SetMass(Square* arr)
{
	srand(time(NULL));
	double ab, bc, cd, ad;
	int j = 0;
	while (j < 11)
	{
		ab = rand() % 10;
		bc = rand() % 10;
		cd = rand() % 10;
		ad = rand() % 10;
		if (ab == bc and ab == cd and ab == ad)
		{
			arr[j] = Square(ab, bc, cd, ad);
			j++;
		}
	}
	int a = j - 1;
	for (int i = 0; i < 11; i++)
	{
		arr[j + i] = arr[a - i];
	}

}