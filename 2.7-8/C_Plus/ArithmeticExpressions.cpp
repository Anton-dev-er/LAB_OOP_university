#include "ArithmeticExpressions.h"
#include <math.h>
#include <iostream>

void ArithmeticExpressions::CalculationExpressions()
{
    try
    {
        if ((24 + d - c) < 0)
        {
            throw 0;
        }
        else if (b == 0)
        {
            throw 1;
        }
        double res = (1 + a - b / 2) / (sqrt(24 + d - c) + (a / b));
        std::cout << res << std::endl;
    }
    catch(int e)
    {
        if(e == 0)
            std::cout << "Корінь повинен бути більше 0" << std::endl;
        if(e == 1)
            std::cout << "Division by 0." << std::endl;
    }

}

ArithmeticExpressions::ArithmeticExpressions(int a, int b, int c, int d)
{

    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;

}