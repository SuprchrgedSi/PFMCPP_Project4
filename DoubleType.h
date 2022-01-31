#pragma once

struct IntType;
struct FloatType;

struct DoubleType
{
    explicit DoubleType(double v) : value(new double(v))  {}
    ~DoubleType()
    {
        delete value;
    }

    DoubleType& add( double rhs );
    DoubleType& subtract( double rhs );
    DoubleType& multiply( double rhs );
    DoubleType& divide( double rhs );
    operator double() { return *value; }
    double getValue() const { return *value; } 

    DoubleType& pow(const FloatType&);
    DoubleType& pow(const DoubleType&);
    DoubleType& pow(const IntType&);
    DoubleType& pow(double dbl);

private:
    DoubleType& pow_internal(const double exp);
    double* value = nullptr;
};

