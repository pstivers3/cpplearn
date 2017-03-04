#include <iostream>

int main()
{
    std::cout << "enter your age ";
    constexpr int x = 4; //not used in the program. Requires c++11 
    int age;
    std::cin >> age;
    const int myAge = age;
    std::cout << "My age is " << age << "\n";
    return 0;
}
