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
    if (sum == n * 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 28;
    cout << perfectnumber(n);

    return 0;
}