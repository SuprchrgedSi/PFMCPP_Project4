#pragma once

struct DoubleType;
struct IntType;

struct FloatType
{
    FloatType(float v) : value(new float(v)) {}
    ~FloatType()
    {
        delete value;
    }
    FloatType& add( float rhs );
    FloatType& subtract( float rhs );
    FloatType& multiply( float rhs );
    FloatType& divide( float rhs );
    operator float() { return *value; }

private:
    float* value = nullptr;
};
