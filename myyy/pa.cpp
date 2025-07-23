#include <iostream>
using namespace std;

int main()
{
    int n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (n == 10)
        {
            for (char ch = 65; ch < 91; ch++)
            {
                cout << ch << " ";
            }
            break;
        }
    }

    return 0;
}
