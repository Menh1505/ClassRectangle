#pragma once
#include <iostream>
class CRectangle
{
    private: 
        int width, height;
    public:
        void setWidth(int _width);
        int getWidth() const;
        void setHeight (int _height);
        int getHeight() const;
        int area();
};