#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    for (int i = 0; i < num; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < num - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}