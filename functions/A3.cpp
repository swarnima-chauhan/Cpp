#include <iostream>
using namespace std;

int formula(int a, int b)
{
    return a * a + b * b + 2 * a * b;
}

int main()
{
    int a = 2;
    int b = 7;
    cout << formula(a, b) << "\n";

    return 0;
}