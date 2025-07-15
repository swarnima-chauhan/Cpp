#include <iostream>
using namespace std;

void reverseArr(int *arr, int n)
{
    int l = 0;
    int r = n - 1;

    while (r > l)
    {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }
}

int main()
{
    int arr[] = {1, 6, 4, 5, 8};
    int n = sizeof(arr) / sizeof(int);

    reverseArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}