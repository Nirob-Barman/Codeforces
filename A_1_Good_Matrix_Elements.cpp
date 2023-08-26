#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    int middle = (n - 1) / 2;

    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];         // Main diagonal
        sum += matrix[i][n - i - 1]; // Secondary diagonal

        if (i == middle)
        {
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];      // Middle row
                sum += matrix[j][middle]; // Middle column
            }
        }
    }

    cout << sum - 3 * matrix[middle][middle] << endl;
    return 0;
}