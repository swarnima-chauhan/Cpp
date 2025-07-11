#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    // upper body
    for (int i = 1; i <= num; i++)
    {
        // left side
        // spaces
        for (int j = 0; j < num - i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2 * (i)-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // another method for lower part
    for (int i = num; i >= 1; i--)
    {
        // spaces
        for (int j = 0; j < num - i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2 * (i)-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}