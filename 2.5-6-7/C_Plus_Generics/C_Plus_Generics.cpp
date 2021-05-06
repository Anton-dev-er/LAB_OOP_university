#include "Ellipsis.h"
#include "Point.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    Ellipsis <int> p(0, 10, 0, 0, 20, 6);
    cout << "Perimert: " << p.Perimetr() << endl;
    cout << "Sarea: " << p.Sarea() << endl;

    p.ChangeEllipsis(0, 10, 0, 0, 40, 6);
    cout << "Perimert: " << p.Perimetr() << endl;
    cout << "Sarea: " << p.Sarea() << endl;

    cout << "Ellipsis with wrong value" << endl;
    Ellipsis <int> p1(2, 20, 12, 0213, 20, 6);
    cout << "Perimert: " << p1.Perimetr() << endl;
    cout << "Sarea: " << p1.Sarea() << endl;

}
