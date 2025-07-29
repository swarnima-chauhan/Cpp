#include <iostream>
using namespace std;

void trap(int *heights, int n)
{
    int leftMax[20000];
    leftMax[0] = heights[0];
    // cout << leftMax[0] << ", ";
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        // cout << leftMax[i] << ", ";
    }

    int rightMax[20000];
    rightMax[n - 1] = heights[n - 1];
    // cout << rightMax[n - 1] << ", ";
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        // cout << rightMax[i] << ", ";
    }

    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    cout << "water trapped : " << waterTrapped;
}

void myRa(int *bars, int n) // my try that is wrong
{
    int left = 0;
    int right = 0;
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        left = max(bars[i], left);
        int k = i;
        while (k != n)
        {
            right = max(bars[k + 1], right);
            k++;
        }

        int awt = min(left, right) - bars[i];
        if (awt < 0)
        {
            awt = 0;
        }
        else if (i == n - 1 || i == 0)
        {
            awt = 0;
        }
        cout << awt << " ";
        water += awt;
    }
    cout << endl;
    cout << water;
}

int main()
{
    int bars[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(bars) / sizeof(int);
    trap(bars, n);
    return 0;
}