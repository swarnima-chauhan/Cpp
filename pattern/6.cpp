#include <iostream>
using namespace std;

int main()
{
    int l = 4;
    int b = 5;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || i == l - 1 || j == 0 || j == (b - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}