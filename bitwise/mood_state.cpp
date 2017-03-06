#include <iostream>
int main()
{
    // Define a bunch of physical/emotional states
    const unsigned char isHungry = 0x01; // hex for 0000 0001
    const unsigned char isSad = 0x02; // hex for 0000 0010
    const unsigned char isMad = 0x04; // hex for 0000 0100
    const unsigned char isHappy = 0x08; // hex for 0000 1000
    const unsigned char isLaughing = 0x10; // hex for 0001 0000
    const unsigned char isAsleep = 0x20; // hex for 0010 0000
    const unsigned char isDead = 0x40; // hex for 0100 0000
    const unsigned char isCrying = 0x80; // hex for 1000 0000
    
    unsigned char me = 0; // all flags/options turned off to start
    me |= isHappy | isLaughing; // I am happy and laughing
    me &= ~isLaughing; // I am no longer laughing
    		 
    // Query a few states (we'll use static_cast<bool> to interpret the results as a boolean value rather than an integer)
    std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
    std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
     		 
    return 0;
}
