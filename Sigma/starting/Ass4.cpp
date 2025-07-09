#include <iostream>
using namespace std;

bool leapYear(int year)
{
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

bool armStrong(int num)
{
    int n = num;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }
    if (sum == num)
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
    cout << "Conditional statements Assignment.\n";
    // int year;
    // cout << "Enter a year to know if its leap year :";
    // cin >> year;
    // if (leapYear(year))
    // {
    //     cout << year << " is leap year.\n";
    // }
    // else
    // {
    //     cout << year << " is not a leap year.\n";
    // }

    int num;
    cout << "Enter a number to check if it is Armstrong :";
    cin >> num;

    if (armStrong(num))
    {
        cout << num << " is Armstrong.\n";
    }
    else
    {
        cout << num << " is not Armstrong.\n";
    }

    return 0;
}