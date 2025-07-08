#include <iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    int max = a;
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
    int b = 9;
    int c = 4;

    cout << findMax(a, b, c);

    return 0;
}