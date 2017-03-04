#include <iostream>

using namespace std;

int readNumber()
{
    cout << "enter number ";
    int x;
    cin >> x;
    return x;
}

void writeAnswer(int x)
{
    cout << "the answer is " << x << endl;
}

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
    return 0;
}
