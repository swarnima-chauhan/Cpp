#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int val = start; val <= end; val++)
            {
                cout << arr[val] << " ";
            }
            cout << "  ";
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