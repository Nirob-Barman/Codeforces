#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int p;
        scanf("%d", &p);
        a[p] = i;
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}