#include "FloatType.h"

#include "DoubleType.h"
#include "IntType.h"

#include <iostream>

FloatType& FloatType::add(float rhs) 
{ 
    *value += rhs;
    return *this;
}

FloatType& FloatType::subtract(float rhs) 
{ 
    *value -= rhs;
    return *this;
}

FloatType& FloatType::multiply(float rhs) 
{ 
    *value *= rhs;
    return *this;
}

FloatType& FloatType::divide(float rhs) 
{ 
    if (rhs == 0.f) 
    {
        std::cout << "warning: floating point division by zero!" << std::endl;
    }
    *value /= rhs;
    return *this;
}
