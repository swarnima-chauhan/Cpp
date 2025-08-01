#include <iostream>
using namespace std;

void swapp(int *a, int *b)
{
    int t = *b;
    *b = *a;
    *a = t;
}

int main()
{

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
    swapp(&x, &y);

    cout << x << " " << y;

    return 0;
}