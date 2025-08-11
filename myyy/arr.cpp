#include <iostream>
using namespace std;

void swapp(int *a, int *b)
{
    int t = *b;
    *b = *a;
    *a = t;
}
void swappp(int &a, int &b)
{
    int p = a;
    a = b;
    b = p;
}
int main()
{
    cout << "Just to amintain streak!" << endl;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 0 && i % 10 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << n * (i + 1) << " ";
    }
    cout << endl;

    for (int i = 0; i < 26; i++)
    {
        char ch = 'A';
        ch = ch + i;
        cout << ch;
        ch = ch + 32;
        cout << ch;
    }
    cout << endl;

    int x = 7;
    int y = 9;
    swappp(x, y);

    cout << x << " " << y;

    return 0;
}