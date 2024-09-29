#include "calculator.h"
#include <stdexcept>

double Calculator::Add(double a, double b) 
{
    return a + b;
}

double Calculator::Mul(double a, double b) 
{
    return a * b;
}

double Calculator::Div(double a, double b) 
{
    if (b != 0) 
    {
        return a / b;
    } 
    else 
    {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
}