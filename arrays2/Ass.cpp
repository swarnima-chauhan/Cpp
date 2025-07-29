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

int Ass2(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    // int n = sizeof(arr) / sizeof(int);
    // cout << Ass1(arr, n);

    int arr2[] = {4, 5, 6, 7, 0, 1, 2};
    int n2 = sizeof(arr2) / sizeof(int);

    cout << Ass2(arr2, n2, 3);

    return 0;
}