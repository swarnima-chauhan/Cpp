#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int i = 0; i < num; i++)
    {
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }
    return 0;
}