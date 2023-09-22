#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ra, ca, rb, cb;
    scanf("%d %d", &ra, &ca);

    int A[ra][ca];
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &rb, &cb);

    int B[rb][cb];
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // if (ca != rb)
    // {
    //     printf("Matrix multiplication is not possible.\n");
    //     return 0;
    // }

    int result[ra][cb];
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < ca; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d", result[i][j]);
            if (j < cb - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}