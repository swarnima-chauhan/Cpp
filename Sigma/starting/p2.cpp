#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to find sum of its digits : ";
    cin >> num;

    int sum = 0;
    // finding sum of all digits
    //  while (num > 0)
    //  {
    //      int digit = num % 10;
    //      sum = sum + digit;
    //      num = num / 10;
    //  }

    // finding sum of only odd digits
    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0)
        {
            sum = sum + digit;
        }
        num = num / 10;
    }

    cout << "Sum of digits of " << num << " : " << sum << endl;

    return 0;
}