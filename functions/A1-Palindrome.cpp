#include <iostream>
using namespace std;

bool isPal(int num)
{
    int n = num;
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (num == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 121;
    if (isPal(n))
    {
        cout << "\n"
             << n << " is a Palindrome number.\n\n";
    }
    else
    {
        cout << "\n"
             << n << " is not a Palindrome number. \n\n";
    }
    return 0;
}