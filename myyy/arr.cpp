#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 26; i++)
    {
        char ch = 'A';
        char c = 'a';
        ch = ch + i;
        cout << ch;
        c = c + i;
        cout << c;
    }
    return 0;
}