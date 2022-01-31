#include "Point.h"

#include <iostream>

void Point::toString()
    {std::cout << "Point { x: " << x << ", y: " << y << " }" << std::endl;}
        
Point& Point::multiply(float m)
{
    x *= m;
    y *= m;
    return *this;
}
