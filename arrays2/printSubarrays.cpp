#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Starting Point : " << arr[i] << " ";
        cout << "ending points: ";
        for (int j = i; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);

    return 0;
}