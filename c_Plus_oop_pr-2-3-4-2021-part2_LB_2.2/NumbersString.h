#pragma once

class NumbersString : public IChangingSymbol
{
private:
	string str;
public:
	NumbersString(string str) { this->str = str; };

	void ChangeSymbol() override
	{
		cout << "C����� " << str << endl;
		string n1, n2;
		while (true)
		{
			cout << "������ ����� ��� ������ ������(���� �����):";
			getline(cin, n1);
			cout << "������ ����� �� ��� ������ �������:";
			getline(cin, n2);
			if (n1.length() != 1)
				continue;
			cout << endl;
			if ((n1 == "0" or atoi(n1.c_str()) != 0) or (n2 == "0" or atoi(n2.c_str()) != 0))
			{
				for (int i = 0; i < str.length(); i++)
					if (str[i] == (char)n1[0])
						str = str.replace(i, 1, n2);
					break;
			}
			else { continue; }
		}
		cout << "���� ������ " << str << endl << endl;
	}

	~NumbersString() {};
};