#include <iostream>
using namespace std;

int sumofDN(int n)
{
    int num = n;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n = 1234;
    cout << "Sum of Digits of " << n << " is " << sumofDN(n) << "\n";
    return 0;
}