#include <iostream>
using namespace std;

int binTodec(int n)
{
    int binN = n;
    int pow = 1;
    int res = 0;

    while (n > 0)
    {
        int digit = n % 10;
        res += digit * (pow);
        pow = pow * 2;
        n = n / 10;
    }
    return res;
}

int main()
{
    int n = 101;
    cout << " decimal of " << n << " is " << binTodec(n) << endl;
    return 0;
}