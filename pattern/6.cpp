#include <iostream>
using namespace std;

int main()
{
    // int l = 4;
    // int b = 5;
    // for (int i = 0; i < l; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         if (i == 0 || i == l - 1 || j == 0 || j == (b - 1))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // Shraddha Didi's code

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "* " << endl;
    }

    return 0;
}