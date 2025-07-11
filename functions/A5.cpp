#include <iostream>
using namespace std;

char nextt(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else
    {
        return ch + 1;
    }
}

int main()
{
    char ch = 'z';
    cout << nextt(ch) << endl;
    return 0;
}