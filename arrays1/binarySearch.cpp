#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int res = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;

    cout << binarySearch(arr, n, key);
    return 0;
}