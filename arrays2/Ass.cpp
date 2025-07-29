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

int Ass3(int *arr, int n)
{
    int maxProduct = INT32_MIN;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
        maxProduct = max(maxProduct, product);
    }
    return maxProduct;
}

int main()
{
    // int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    // int n = sizeof(arr) / sizeof(int);
    // cout << Ass1(arr, n);

    int arr2[] = {4, 5, 6, 7, 0, 1, 2};
    int n2 = sizeof(arr2) / sizeof(int);

    cout << Ass2(arr2, n2, 3) << endl;

    int arr3[] = {-2, 0, -1};
    int n3 = sizeof(arr3) / sizeof(int);

    cout << Ass3(arr3, n3);

    return 0;
}