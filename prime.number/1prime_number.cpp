#include <iostream>

int enterDigit()
{
    std::cout << "enter a single digit integer: ";
    int x;
    std::cin >> x;
    return x;
}

void primeChecker(int x)
{
    if (x==2 || x==3 || x==5 || x==7 )
        std::cout << x << " is a prime number" << std::endl;
    else
        std::cout << x << " is not a prime number" << std::endl;
}

int main()
{
    primeChecker(enterDigit());
    return 0;
}
