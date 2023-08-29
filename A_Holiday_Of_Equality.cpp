#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int maxWelfare = INT_MIN;
    int minBurles = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        maxWelfare = max(maxWelfare, a[i]);
    }
    if (n == 1)
    {
        minBurles = 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
            minBurles += (maxWelfare - a[i]);
    }

    printf("%d\n", minBurles);
    return 0;
}