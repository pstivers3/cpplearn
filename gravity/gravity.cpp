#include <iostream>

#include "constants.h"

double getInitialHeight()
{
    std::cout << "enter the height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

double getBallHeight(double towerHeight, double seconds)
{
    double ballHeight = towerHeight - (myConstants::gravity * seconds * seconds)/2;
    return ballHeight;
}

void printBallHeight()
{
    double towerHeight = getInitialHeight();
    float sec; 
    sec = 0.0; 
    std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    sec = 1.0;
    if (getBallHeight(towerHeight, sec) > 0.0)
        std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    else
        std::cout << "At " << sec << " the blll is on the ground.\n";
    sec = 2.0;
    if (getBallHeight(towerHeight, sec) > 0.0)
        std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    else
        std::cout << "At " << sec << " the blll is on the ground.\n";
    sec = 3.0; 
    if (getBallHeight(towerHeight, sec) > 0.0)
        std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    else
        std::cout << "At " << sec << " the blll is on the ground.\n";
    sec = 4.0; 
    if (getBallHeight(towerHeight, sec) > 0.0)
        std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    else
        std::cout << "At " << sec << " the blll is on the ground.\n";
    sec = 5.0; 
    if (getBallHeight(towerHeight, sec) > 0.0)
        std::cout << "At " << sec << " seconds the ball is at height: " << getBallHeight(towerHeight, sec) << " meters \n";
    else
        std::cout << "At " << sec << " the blll is on the ground.\n";  
}

int main()
{
    printBallHeight(); 
    return 0;
}
