#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    // upper body
    for (int i = 0; i < num; i++)
    {
        // left side
        // spaces
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2 * (i + 1) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower part
    for (int i = 0; i < num; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2 * (num - (i + 1)) + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}