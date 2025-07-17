#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 0)
        return false;

    int root = sqrt(num);
    return root * root == num;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfectSquare(n))
        cout << n << " is a Perfect Square.\n";
    else
        cout << n << " is NOT a Perfect Square.\n";
    return 0;
}