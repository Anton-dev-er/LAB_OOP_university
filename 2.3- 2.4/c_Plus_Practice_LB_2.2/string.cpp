#pragma once
#include "string.h"
#include <cmath>
#include <iostream>


void String::lenString()
{
	cout << "������� ����� " << str.length() << endl;
}

void Letters::lenString()
{
	cout << "����� ����:" << str << endl;
	::String::lenString();
	string newstr, a;
	for (int i = str.length(); i >= 0; i--)
	{
		a = str[i];
		newstr.append(a);
	}
	cout << "������������ �����:" << newstr << endl << endl;
}

void Number::lenString()
{
	cout << "����� ����:" << str << endl;
	::String::lenString();
	cout << "�������� ����� ����:" << str.append(str) << endl << endl;
}