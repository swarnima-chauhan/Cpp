#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to find sum of its digits : ";
    cin >> num;

    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "Sum of digits of " << num << " : " << sum << endl;

    return 0;
}