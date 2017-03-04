#include <iostream>
#include <cmath>

int getDecimalInt()
{
    std::cout << "enter an integer from 1 to 255: ";
    int decimal;
    std::cin >> decimal;
    return decimal;
}

int convertDecimalToBinary(int decimal)
{
    int pow2(0);
    int exp(7); 
    while (exp >= 0)
    {
        pow2 = pow(2, exp); 
        if (decimal >= pow2)
        {
            std::cout << "1";
            decimal -= pow2;
        } 
        else    
            std::cout << "0";
        if (exp == 4)
            std::cout << " "; 
        exp -= 1;
    }
    std::cout << "\n";
}

int main()
{
    convertDecimalToBinary(getDecimalInt());
    return 0;
} 
