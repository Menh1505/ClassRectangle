#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    CRectangle rect1, *rect2;
    rect1.setHeight(3);
    rect1.setWidth(4);
    cout << "Height 1: " << rect1.getHeight() << endl;
    cout << "Width 1: " << rect1.getWidth() << endl;
    cout << "S1: " << rect1.area() << endl;
    cout << endl;
    return 0;
}