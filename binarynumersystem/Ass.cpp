#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    return rev;
}

int addBin(int a, int b)
{
    int x = a;
    int y = b;
    int carry = 0;
    int sum = 0;
    while (x > 0 || y > 0 || carry > 0)
    {
        int r1 = x % 10;
        int r2 = y % 10;

        if (r1 == 0 && r2 == 0)
        {
            if (carry == 0)
            {
                sum = sum * 10 + 0;
                carry = 0;
            }
            else
            {
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else if ((r1 == 1 && r2 == 0) || (r1 == 0 && r2 == 1))
        {
            if (carry == 0)
            {
                sum = sum * 10 + 1;
                carry = 0;
            }
            else
            {
                sum = sum * 10 + 0; // r1+r2
                carry = 1;
            }
        }
        else if (r1 == 1 && r2 == 1)
        {
            if (carry == 0)
            {
                sum = sum * 10 + 0;
                carry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                carry = 1;
            }
        }
        x = x / 10;
        y = y / 10;
    }
    cout << sum << endl;
    return reverseNumber(sum);
}

int main()
{

    cout << addBin(10, 11);
    return 0;
}