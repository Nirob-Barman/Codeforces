#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, l, a[50], participantCount = 0;
    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) // 1 to n ===k and 0 to n-1 -----(k-1)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
            participantCount++;
    }
    printf("%d\n", participantCount);

    return 0;
}