#include <iostream>
#include <math.h>
#include "ArithmeticExpressions.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    ArithmeticExpressions arr[7] =
    {
        ArithmeticExpressions(0,0,0,0),
        ArithmeticExpressions(1,12,242,0),
        ArithmeticExpressions(2,0,0,324),
        ArithmeticExpressions(3,123,24,23),
        ArithmeticExpressions(4,76,0,123),
        ArithmeticExpressions(5,7,42,100),
        ArithmeticExpressions(67,23,0,0)
    };


    for (int i = 0; i < 7; i++)
    {
        arr[i].CalculationExpressions();
    }

}
