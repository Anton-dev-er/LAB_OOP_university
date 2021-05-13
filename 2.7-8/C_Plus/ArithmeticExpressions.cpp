#include "ArithmeticExpressions.h"
#include <math.h>
#include <iostream>

double ArithmeticExpressions::CalculationExpressions()
{

    double res = (1 + a - b / 2) / (sqrt(24 + d - c) + (a / b));
    return res;

}

ArithmeticExpressions::ArithmeticExpressions(int a, int b, int c, int d)
{

    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;

}