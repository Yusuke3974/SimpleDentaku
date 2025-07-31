#include <iostream>
#include "calculator.h"

int main()
{
    double a, b;
    char op;
    while (true)
    {
        std::cout << "Enter expression (a + b): ";
        std::cin >> a >> op >> b;
        if (std::cin.fail())
            break;

        double result;
        bool valid = calculate(a, op, b, result);
        if (valid)
        {
            std::cout << "Result: " << result << "\n";
        }
        else
        {
            std::cout << "Invalid operation!\n";
        }
    }
    return 0;
}
