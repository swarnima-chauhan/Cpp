#include <iostream>
using namespace std;

int buySell(int *prices, int n);

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
    cout << buySell2(prices, n);

    return 0;
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