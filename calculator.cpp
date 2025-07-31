#include "calculator.h"

bool calculate(double a, char op, double b, double &result)
{
    switch (op)
    {
    case '+':
        result = a + b;
        return true;
    case '-':
        result = a - b;
        return true;
    case '*':
        result = a * b;
        return true;
    case '/':
        if (b == 0.0)
            return false;
        result = a / b;
        return true;
    default:
        return false;
    }
}
