#include "Line.h"
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    Segment segment(1, 1, 5, 1);
    segment.set_yA(10);
    int len = segment.length_line();
    cout << "Довжина відрізка:" << len << endl;
    cout << "Збільшення відрізка на 2:"<< segment.length_line_x2(len) << endl;
    cout << "Координати A: " << segment.get_xA() <<", "<< segment.get_yA() << endl;
    cout << "Координати B: " << segment.get_xB() <<", "<< segment.get_yB() << endl;
    

}
