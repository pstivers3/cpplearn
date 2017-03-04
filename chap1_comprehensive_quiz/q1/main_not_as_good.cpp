#include <iostream>

using namespace std;

int readNumber()
{
    cout << "enter number ";
    int x;
    cin >> x;
    return x;
}

int writeAnswer(int x, int y)
{
    return x + y;
}

int main()
{
    int x = readNumber();
    int y = readNumber();
    cout << writeAnswer(x,y) << endl;
    return 0;
}
