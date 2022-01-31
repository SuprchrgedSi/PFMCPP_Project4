#include "FloatType.h"

#include "DoubleType.h"
#include "IntType.h"

#include <iostream>
#include <cmath>

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

FloatType& FloatType::pow(const FloatType& ft)
{
    return pow_internal(ft.getValue());
}

FloatType& FloatType::pow(const DoubleType& dt)
{
    return pow_internal(static_cast<float>(dt.getValue()));
}

FloatType& FloatType::pow(const IntType& it)
{
    return pow_internal(static_cast<float>(it.getValue()));
}

FloatType& FloatType::pow(float flt)
{
    return pow_internal(flt);
}

FloatType& FloatType::pow_internal(const float exp)
{
    *value = std::pow(*value, exp);
    return *this;
}
