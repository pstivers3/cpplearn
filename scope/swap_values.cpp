#include <iostream>

int get_integer()
{
    std::cout << "enter an integer: ";
    int integer;
    std::cin >> integer;
	return integer;
} // integer is destroyed here

int get_larger_integer()
{
    std::cout << "enter a larger integer: ";
    int larger_integer;
    std::cin >> larger_integer;
	return larger_integer;
} //large integer is destroyed here

int main()
{
	int integer = get_integer();
    int larger_integer = get_larger_integer();
   
   	if (larger_integer < integer)
	{
	    std::cout << "swapping the values\n"; 
		int temp = integer; 
		integer = larger_integer;
	    larger_integer = temp;
	} // temp is destroyed here

	std::cout << "The smaller value is: " << integer << "\n";	
	std::cout << "The larger value is: " << larger_integer << "\n";
    
    return 0;
} // integer and large_integer are destroyed here

