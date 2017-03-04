#include <iostream>

double getFirstValue()
{
    std::cout << "enter a double value: ";
    double v1;
    std::cin >> v1;
    return v1;
}

double getSecondValue()
{
    std::cout << "enter a second double value: ";
    double v2;
    std::cin >> v2;
    return v2;
}

char getOperator()
{
    std::cout << "enter one of the following: +, -, *, or /: ";
    char op;
    std::cin >> op;
    return op;
}

void calculate(double x, double y, char op)
{
    if (op == '+')
        std::cout << x << " + " << y << " = " << x + y << "\n";
    else if (op == '-')
        std::cout << x << " - " << y << " = " << x - y << "\n";
    else if (op == '*')
        std::cout << x << " * " << y << " = " << x * y << "\n";
    else if (op == '/')
        std::cout << x << " / " << y << " = " << x / y << "\n";
    else 
        std::cout << "op " << op << " is not valid \n";
}

int main()
{
    double x = getFirstValue();
    double y = getSecondValue();
    char op = getOperator();
    calculate(x, y, op);
    return 0;
}
