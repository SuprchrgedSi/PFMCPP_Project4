#include "IntType.h"

#include "FloatType.h"
#include "DoubleType.h"

#include <iostream>

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
