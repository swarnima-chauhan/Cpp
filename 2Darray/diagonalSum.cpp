#include <iostream>
using namespace std;
int diagonalSum(int matrix[][4], int n, int m)
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
        ssum += matrix[i][j];
        i++;
    }

    return psum + ssum;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << diagonalSum(matrix, 4, 4);
    return 0;
}