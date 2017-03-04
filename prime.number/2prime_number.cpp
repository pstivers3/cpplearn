#include <iostream>

int enterDigit()
{
    std::cout << "enter a single digit integer: ";
    int x;
    std::cin >> x;
    std::cout << x;
    return x;
}

bool isPrime(int x)
{
    if (x==2 || x==3 || x==5 || x==7 )
       return true; 
    return false;
}

void outputAnswer(bool a)
{
    if (a)
        std::cout << " is a prime number" << std::endl;
    else
        std::cout << " is not a prime number" << std::endl;
}    

int main()
{
    outputAnswer(isPrime(enterDigit()));
    return 0;
}
