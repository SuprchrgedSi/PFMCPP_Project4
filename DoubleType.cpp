#include "DoubleType.h"

#include "FloatType.h"
#include "IntType.h"

#include <iostream>
#include <cmath>

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

DoubleType& DoubleType::pow(const FloatType& ft)
{
    return pow_internal(static_cast<double>(ft.getValue()));
}

DoubleType& DoubleType::pow(const DoubleType& dt)
{
    return pow_internal(dt.getValue());
}

DoubleType& DoubleType::pow(const IntType& it)
{
    return pow_internal(static_cast<double>(it.getValue()));
}

DoubleType& DoubleType::pow(double dbl)
{
    return pow_internal(dbl);
}

DoubleType& DoubleType::pow_internal(const double exp)
{
    *value = std::pow(*value, exp);
    return *this;
}
