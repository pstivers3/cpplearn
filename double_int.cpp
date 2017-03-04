#include <iostream>

using namespace std;

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    int x; 
    cout << "Input x: ";
    cin >> x; 
    cout << "x doubled is " << doubleNumber(x) << endl;
    return 0;
}
