#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cin >> n;
        if (n == 10)
        {
            for (char i = 65; i < 91; i++)
            {
                cout << i << " ";
            }
        }
    } while (n != 10);
    return 0;
}
