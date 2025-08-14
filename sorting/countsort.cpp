#include <iostream>
using namespace std;
// counting sort,used when the range is short
void countSort(int arr[], int n)
{
    int freq[100000]; // range
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for (int i = minVal; i <= maxVal; i++)
    {
    }
}

int main()
{
    return 0;
}
