#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    print(arr, n);
}

int main()
{
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    bubbleSort(arr, 10);
}