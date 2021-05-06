#pragma once
#include "IChangingSymbol.h"


class NonAlphabetSymbolsString : public IChangingSymbol
{
private:
	string str;
public:
	NonAlphabetSymbolsString(string str) { this->str = str; };

	void ChangeSymbol() override
	{
		cout << "C����� " << str << endl;
		string n1, n2;
		while (true)
		{
			cout << "������ �� ��������� ������ ���� ������ �������(1 ������):";
			getline(cin, n1);
			cout << "������ �� ��������� ������ �� ���� ������ �������:";
			getline(cin, n2);
			cout << endl;
			if (n1.length() != 1)
				continue;
			if (((n1 >= "a" && n1 <= "z") || (n1 >= "A" && n1 <= "Z")) == false)
			{
				for (int i = 0; i < str.length(); i++)
					if (str[i] == char(n1[0]))
						str = str.replace(i, 1, n2);
				break;
			}
			else { continue; }
		}
		cout << "���� ������ " << str << endl;
	}
	~NonAlphabetSymbolsString() {};

};

