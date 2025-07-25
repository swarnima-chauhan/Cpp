#include <iostream>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
    int maxSum = INT32_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[7] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << maxSubarraySum(arr, n);

    return 0;
}