#pragma once

#include "FloatType.h"
#include "DoubleType.h"
#include "IntType.h"

struct Point
{
    Point(float x1,float y1) : x(x1), y(y1) {}
    
    Point (const FloatType& ft1, const FloatType& ft2) : 
    x(ft1.getValue()), 
    y(ft2.getValue()) {}
    
    Point (const DoubleType& dt1, const DoubleType& dt2): 
    x(static_cast<float>(dt1.getValue())), 
    y(static_cast<float>(dt2.getValue())) {}
    
    Point (const IntType& it1, const IntType& it2) : 
    x(static_cast<int>(it1.getValue())), 
    y(static_cast<int>(it2.getValue())) {}
    
    void toString();

    Point& multiply(float m); 
    Point& multiply(const FloatType& ft) 
        { return multiply(ft.getValue()); } 
    Point& multiply(const DoubleType& dt) 
        { return multiply(static_cast<float>(dt.getValue())); }  
    Point& multiply(const IntType& it)
        { return multiply(static_cast<float>(it.getValue())); }  

private:
    float x{0}, y{0};
};
