#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // numbers
        int val = i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val;
            val--;
        }
        val = 2;
        for (int j = 0; j < i; j++)
        {
            cout << val;
            val++;
        }

        cout << endl;
    }
    return 0;
}