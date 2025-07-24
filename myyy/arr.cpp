#include <iostream>
using namespace std;

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
    return 0;
}