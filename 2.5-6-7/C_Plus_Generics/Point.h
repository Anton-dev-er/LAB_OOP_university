#pragma once
#include <cmath>
#include <iostream>

template <class T>
class Point
{
public:
    T xF1, yF1, xF2, yF2, xO, yO;
    Point(T xF1, T yF1, T xF2, T yF2, T xO, T yO){
        this->xF1 = xF1;
        this->yF1 = yF1;
        this->xF2 = xF2;
        this->yF2 = yF2;
        this->xO = yO;
        this->yO = yO;
    }

    Point()
    {
        xF1 = 20;
        yF1 = 0;
        xF2 = 0;
        yF2 = 0;
        xO = 10;
        yO = 0;
    }

    double SetSide(T x1, T y1, T x2, T y2)
    {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

