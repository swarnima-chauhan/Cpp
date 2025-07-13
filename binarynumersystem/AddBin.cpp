#include <iostream>
using namespace std;

int addBin(int a, int b)
{
    int result = 0;
    int carry = 0;
    int pow = 1;

    while (a > 0 || b >> 0 || carry > 0)
    {
        int r1 = a % 10;
        int r2 = b % 10;

        int sum = r1 + r2 + carry;
        int digit = sum % 2;
        carry = sum / 2;

        result = result + digit * pow;
        pow = pow * 10;

        a = a / 10;
        b = b / 10;
    }
    return result;
}

int main()
{
    cout << "Binary Sum: " << addBin(1010, 1011) << endl;
    return 0;
}