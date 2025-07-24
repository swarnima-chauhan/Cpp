#include <iostream>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_FAST32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum = currSum + arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);

    cout << maxSubarraySum(arr, n);
    return 0;
}