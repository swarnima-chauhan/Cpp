#include <iostream>
using namespace std;
int diagonalSum1(int matrix[][3], int n, int m)
{
    // primary diagonal sum
    int psum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                psum += matrix[i][j];
            }
        }
    }

    // secondary diagonal sum
    int i = 0;
    int ssum = 0;
    while (i < n)
    {
        int j = n - i - 1;
        if (i == j)
        {
            i++;
            continue;
        }
        ssum += matrix[i][j];
        i++;
    }

    return psum + ssum;
}

int diagonalSum(int matrix[][3], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum1(matrix1, 3, 3);
    return 0;
}