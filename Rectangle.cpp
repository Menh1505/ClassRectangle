#include "Rectangle.h"
using namespace std;

void CRectangle::setWidth(int _width)
{
     width = _width;
}
int CRectangle::getWidth() const
{
    return width;
}
void CRectangle::setHeight(int _height)
{
     height = _height;
}
int CRectangle::getHeight() const
{
    return height;
}
int CRectangle::area()
{
    return width * height;
}
