#include <iostream>
using namespace std;

void maxProfit(int *prices, int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;
    cout << bestBuy[0] << ", ";
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        cout << bestBuy[i] << ", ";
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << endl
         << maxProfit;
}

int buySell(int *prices, int n)
{
    int maxProfit = 0;
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            profit = prices[i] - prices[j];
            maxProfit = max(profit, maxProfit);
        }
    }
    return maxProfit;
}

int buySell2(int *prices, int n)
{
    int maxProfit = 0;
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT32_MAX;
        for (int j = 0; j < i; j++)
        {
            if (min > prices[j])
            {
                min = prices[j];
            }
        }
        profit = prices[i] - min;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}

int buySell3(int *prices, int n)
{
    int min = prices[0];
    int maxP = 0;
    int pro = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        pro = prices[i] - min;
        maxP = max(pro, maxP);
    }
    return maxP;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    // cout << buySell2(prices, n);

    maxProfit(prices, n);

    return 0;
}
