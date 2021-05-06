#pragma once
#include "string.h"
#include <cmath>
#include <iostream>


void String::lenString()
{
	cout << "Довжина рядка " << str.length() << endl;
}

void Letters::lenString()
{
	cout << "Рядок літер:" << str << endl;
	::String::lenString();
	string newstr, a;
	for (int i = str.length(); i >= 0; i--)
	{
		a = str[i];
		newstr.append(a);
	}
	cout << "Перевернутий рядок:" << newstr << endl << endl;
}

void Number::lenString()
{
	cout << "Рядок цифр:" << str << endl;
	::String::lenString();
	cout << "Подвоєний рядок цифр:" << str.append(str) << endl << endl;
}