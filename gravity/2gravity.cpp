#include <iostream>

#include "constants.h"

double getInitialHeight()
{
    std::cout << "enter the height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

void getAndPrintBallHeight(double towerHeight, double seconds)
{
    double ballHeight = towerHeight - (myConstants::gravity * seconds * seconds)/2;
    if (ballHeight > 0.0) 
        std::cout << "At " << seconds << " seconds the ball is at height: " << ballHeight << " meters \n";
    else
        std::cout << "At " << seconds << " the blll is on the ground.\n";
}

int main()
{
    double towerHeight = getInitialHeight();
    getAndPrintBallHeight(towerHeight, 0); 
    getAndPrintBallHeight(towerHeight, 1); 
    getAndPrintBallHeight(towerHeight, 2); 
    getAndPrintBallHeight(towerHeight, 3); 
    getAndPrintBallHeight(towerHeight, 4); 
    getAndPrintBallHeight(towerHeight, 5); 
    return 0;
}
