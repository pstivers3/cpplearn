#include <iostream>
int main()
{
    const unsigned int redBits = 0xFF000000;     // 0000 0000 1111 1111 0000 0000 0000 0000 0000 0000
    const unsigned int greenBits = 0x00FF0000;   // 0000 0000 0000 0000 1111 1111 0000 0000 0000 0000 
    const unsigned int blueBits = 0x0000FF00;    // 0000 0000 0000 0000 0000 0000 1111 1111 0000 0000
    const unsigned int alphaBits = 0x000000FF;   // 0000 0000 0000 0000 0000 0000 0000 0000 1111 1111
 
    std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
    unsigned int pixel;
    std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value
 
    // use bitwise AND to isolate red pixels, then right shift the value into the range 0-255
    // unsigned char red = (pixel & redBits) >> 24;
    // unsigned char green = (pixel & greenBits) >> 16;
    // unsigned char blue = (pixel & blueBits) >> 8;
    // unsigned char alpha = pixel & alphaBits;

    // bitwise AND isn't really needed	
    unsigned char red = pixel >> 24;
    unsigned char green = pixel >> 16;
    unsigned char blue = pixel >> 8;
    unsigned char alpha = pixel;
	
	std::cout << "Your color contains:\n";
    std::cout << static_cast<int>(red) << " of 255 red\n";
    std::cout << static_cast<int>(green) << " of 255 green\n";
    std::cout << static_cast<int>(blue) << " of 255 blue\n";
    std::cout << static_cast<int>(alpha) << " of 255 alpha\n";
 
    return 0;
}

