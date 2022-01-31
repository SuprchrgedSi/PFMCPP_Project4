#pragma once

struct FloatType;
struct DoubleType;

struct IntType
{
    IntType(int v) : value(new int(v)) {}
    ~IntType()
    {
        delete value;
    }

    IntType& add( int rhs );
    IntType& subtract( int rhs );
    IntType& multiply( int rhs );
    IntType& divide( int rhs );
    operator int() { return *value; }
    
private:
    int* value = nullptr;
};
