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

	cout << "\n====��������� �� �������������====" << endl;
	Square square1;
	double ab = square1.SideAB();
	double bc = square1.SideBC();
	double cd = square1.SideCD();
	double ad = square1.SideAD();
	Check_the_square(ab, bc, cd, ad);
	
	cout << "\n====������� ���������====" << endl;
	double xA{}, yA{}, xB{}, yB{}, xC{}, yC{}, xD{}, yD{};

	cout << "������ ������� �(����� ������)):";
	cin >> xA >> yA;
	cout << "������ ������� B(����� ������)):";
	cin >> xB >> yB;
	cout << "������ ������� C(����� ������)):";
	cin >> xC >> yC;
	cout << "������ ������� D(����� ������)):";
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
	cout << "������ �����:";
	double value = 0;
	double value1 = 0;
	cin >> value;
	cout << "\ndouble + Square � ������ �������� double �� ��������� ��������" << endl;
	square1 = square1 + value;

	/*cout << "������ �����:";
	cin >> value1;
	cout << "\nSquare + double � ������ �������� double �� ��������� ��������" << endl;
	square1 = value1 + square1;*/

	cout << "\n��������� ����� ���������� ������� �������� �� �������" << endl;
	square1 = square1 * square2;

	cout << "\n������������� ��������� ������� ��������" << endl;
	++square2;

	cout << "\n�������� �� �������" << endl;
	!square2;

	//�������� �� ��������
	bool result = square1 <= square2;
	if (!result)
	{
		cout << "\n�������� ������ � ������� ��������" << endl;
	}
	else
	{
		cout << "\n�������� ������ � ������� ��������" << endl;
	}


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
		cout << "\n����������� ������ ��� �������� ����������." << endl << "��������� �� ���!" << endl << endl;
	}
}