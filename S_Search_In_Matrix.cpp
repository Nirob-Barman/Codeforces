#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    bool found = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == X)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (found)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    return 0;
}