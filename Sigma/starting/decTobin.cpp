#include <iostream>
using namespace std;

int decTobin(int n)
{
    int num = n;
    int res = 0;
    int pow = 1;

    while (num > 0)
    {
        int dig = num % 2;
        res = res + dig * pow;
        pow = pow * 10;
        num = num / 2;
    }

    return res;
}

int main()
{
    int n = 4;
    cout << "Binary of " << n << " is " << decTobin(n) << "\n";
    return 0;
}