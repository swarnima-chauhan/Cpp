#include <iostream>
using namespace std;

pair<int, int> search(int matrix[][4], int n, int key)
{
    int m = 4;
    for (int i = 0; i < n; i++)
    {
        if (key > matrix[i][0] && key < matrix[i][m - 1])
        {
            int low = 0;
            int high = m - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (matrix[i][mid] == key)
                {
                    return {i, mid};
                }
                else if (matrix[i][mid] < key)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    cout << search(matrix, 4, 33).first << "," << search(matrix, 4, 33).second;
    return 0;
}