#include <iostream>
#include <math.h>
using namespace std;

bool perfectnumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n + 1)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 2;
    cout << perfectnumber(n);

    return 0;
}