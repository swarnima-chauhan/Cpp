#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// bubblesort in descending order
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    print(arr, n);
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            swap(arr[i], arr[maxIndex]);
        }
    }
    print(arr, n);
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] < curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    print(arr, n);
}

void countSort(int arr[], int n)
{
    // Find maximum element
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Assuming values are <= 1000 (adjust size if needed)
    int count[1001] = {0};

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Fill array in descending order
    int index = 0;
    for (int i = maxVal; i >= 0; i--)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }

    print(arr, n);
}

int main()
{
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    countSort(arr, 10);
    return 0;
}