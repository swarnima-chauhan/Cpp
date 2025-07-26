#include <iostream>
using namespace std;

int buySell(int *prices, int n);

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    cout << buySell(prices, n);

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