#include <iostream>
using namespace std;

void myRa(int *bars, int n)
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
        water += awt;
        cout << water << " ";
    }
    cout << endl;
    cout << water;
}

int main()
{
    int bars[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(bars) / sizeof(int);
    myRa(bars, n);
    return 0;
}