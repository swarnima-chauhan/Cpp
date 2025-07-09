#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << "= " << i * num << endl;
    }
}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;

    int a = 0, b = 1, next;
    for (int i = 2; i <= num; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main()
{
    cout << "\n--- LOOPS ASSIGNMENT ---\n";

    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << endl;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    cout << "\n--- Table of " << num << " ---\n";
    table(num);

    cout << fibonacci(num) << endl;

    return 0;
}