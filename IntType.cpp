#include "IntType.h"

#include "FloatType.h"
#include "DoubleType.h"

#include <iostream>
#include <cmath>

IntType& IntType::add(int rhs) 
{ 
    *value += rhs;
    return *this;
}
IntType& IntType::subtract(int rhs) 
{ 
    *value -= rhs;
    return *this;
}
IntType& IntType::multiply(int rhs) 
{ 
    *value *= rhs;
    return *this;
}
IntType& IntType::divide(int rhs) 
{ 
    if (rhs == 0)
    {
        std::cout << "error: integer division by zero is an error and will crash the program!" << std::endl;
    }
    else *value /= rhs;
    return *this;
}

IntType& IntType::pow(const FloatType& ft)
{
    return pow_internal(static_cast<int>(ft.getValue()));
}

IntType& IntType::pow(const DoubleType& dt)
{
    return pow_internal(static_cast<int>(dt.getValue()));
}

IntType& IntType::pow(const IntType& it)
{
    return pow_internal(it.getValue());
}

IntType& IntType::pow(int i)
{
    return pow_internal(i);
}

IntType& IntType::pow_internal(const int exp)
{
    *value = static_cast<int>(std::pow(static_cast<float>(*value), exp));
    return *this;
}
