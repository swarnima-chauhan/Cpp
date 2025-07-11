#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    // upper part
    for (int i = 0; i < num; i++)
    {
        // left side
        for (int j = 0; j < num; j++)
        {
            if (j >= num - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        // right side
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower part
    for (int i = 0; i < num; i++)
    {
    }
    return 0;
}