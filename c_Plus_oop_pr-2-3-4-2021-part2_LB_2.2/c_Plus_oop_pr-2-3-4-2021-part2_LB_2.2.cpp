#include <iostream>
#include <string>
#include "NonAlphabetSymbolsString.h"
#include "NumbersString.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	IChangingSymbol *i = new NumbersString("111222333444555666");
	i->ChangeSymbol();

	i = new NonAlphabetSymbolsString("111222qqqwww___+++");
	i->ChangeSymbol();
	delete i;
}
