#include "DoubleType.h"

#include "FloatType.h"
#include "IntType.h"

#include <iostream>

DoubleType& DoubleType::add(double rhs) 
{ 
    *value += rhs;
    return *this;
}
DoubleType& DoubleType::subtract(double rhs) 
{ 
    *value -= rhs;
    return *this;
}
DoubleType& DoubleType::multiply(double rhs) 
{ 
    *value *= rhs;
    return *this;
}
DoubleType& DoubleType::divide(double rhs) 
{ 
    if (rhs == 0.0)
    {
        
        std::cout << "warning: floating point division by zero!" << std::endl;
    }
    *value /= rhs;
    return *this;
}
