#include <iostream>
using namespace std;

int Largest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{

    int a = 8;
    int b = 87;
    int c = 90;
    cout << Largest(a, b, c) << endl;

    return 0;
}