#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int integer;
    std::cin >> integer;
    return integer;
}

void evenOdd(int integer)
{
    std::cout << integer;
    if (integer % 2)
        std::cout << " is odd\n";
    else
        std::cout << " is even\n";
}

int main()
{
    evenOdd(getInteger());
} 
