#pragma once

struct IntType;
struct FloatType;

struct DoubleType
{
    DoubleType(double v) : value(new double(v)) {}
    ~DoubleType()
    {
        delete value;
    }

    DoubleType& add( double rhs );
    DoubleType& subtract( double rhs );
    DoubleType& multiply( double rhs );
    DoubleType& divide( double rhs );
    operator double() { return *value; }

    // FloatType& pow(const FloatType&);
    // void pow(const DoubleType&);
    // void pow(const IntType&);
    // void pow(double dbl);

private:
    // void pow_internal();
    double* value = nullptr;
};

