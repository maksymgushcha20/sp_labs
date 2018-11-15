#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
<<<<<<< HEAD
    return a + b;
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3 (fix truncation error)
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3b4572deee4efc716e7bd6e6e4fda46dcf
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
