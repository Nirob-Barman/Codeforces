#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 9;

int main()
{
    int coOrdinate, maxCordinate = -1, minCordinate = INF;
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &coOrdinate);
        if (coOrdinate >= maxCordinate)
            maxCordinate = coOrdinate;
        if (coOrdinate < minCordinate)
            minCordinate = coOrdinate;
    }
    printf("%d\n", maxCordinate - minCordinate);

    return 0;
}