#include <iostream>
using namespace std;

bool Ass1(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << Ass1(arr, n);

    return 0;
}