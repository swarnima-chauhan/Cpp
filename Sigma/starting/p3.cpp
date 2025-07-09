#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to reverse it : ";
    cin >> num;

    int n1 = num;

    int n = 0;

    while (num > 0)
    {
        int digit = num % 10;
        n = n * 10 + digit;
        num = num / 10;
    }

    cout << "Reverse of " << n1 << " is " << n << endl;

    return 0;
}