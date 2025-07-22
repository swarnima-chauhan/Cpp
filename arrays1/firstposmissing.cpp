#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {3, 4, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == i + 1)
        {
            continue;
        }
        if (arr[i] != i + 1)
        {
        }
    }

    return 0;
}