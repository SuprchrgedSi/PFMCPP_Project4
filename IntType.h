#pragma once

struct FloatType;
struct DoubleType;

struct IntType
{
    explicit IntType(int v) : value(new int(v)) {}
    ~IntType()
    {
        delete value;
    }

    IntType& add( int rhs );
    IntType& subtract( int rhs );
    IntType& multiply( int rhs );
    IntType& divide( int rhs );
    operator int() { return *value; }
    int getValue() const { return *value; }
    
    IntType& pow(const FloatType&);
    IntType& pow(const DoubleType&);
    IntType& pow(const IntType&);
    IntType& pow(int i);

private:
    IntType& pow_internal(const int exp);
    int* value = nullptr;
};
