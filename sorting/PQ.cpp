#include <iostream>
using namespace std;
void print(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortChar(char arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        char curr = arr[i];
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

int main()
{
    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    sortChar(arr, 6);
    return 0;
}