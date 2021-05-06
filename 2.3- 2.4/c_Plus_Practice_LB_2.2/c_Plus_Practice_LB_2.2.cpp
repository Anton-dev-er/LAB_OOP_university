#include <iostream>
#include "string.h"
#include <typeinfo>									 
#include <string>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");

	string s;
	cout << "Введіть строку" << endl;
	getline(cin, s);
	string num, str, a;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			a = s[i];
			str.append(a);
		}
		if (s[i] >= '0' && s[i] <= '9'){
			a = s[i];
			num.append(a);
		}
	}

	String* i = new Letters(str);
	i->lenString();

	i = new Number(num);
	i->lenString();
	delete i;

}