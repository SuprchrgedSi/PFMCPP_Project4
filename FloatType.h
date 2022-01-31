#pragma once

struct DoubleType;
struct IntType;

struct FloatType
{
    explicit FloatType(float v) : value(new float(v)) {}
    ~FloatType()
    {
        delete value;
    }
    FloatType& add( float rhs );
    FloatType& subtract( float rhs );
    FloatType& multiply( float rhs );
    FloatType& divide( float rhs );
    operator float() { return *value; }
    float getValue() const { return *value; }

    FloatType& pow(const FloatType&);
    FloatType& pow(const DoubleType&);
    FloatType& pow(const IntType&);
    FloatType& pow(float flt);

private:
    FloatType& pow_internal(const float exp);
    float* value = nullptr;
};
