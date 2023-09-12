#include <bits/stdc++.h>

using namespace std;

long long suffixSum(int a[], int n, int m)
{
    if (m == 0)
        return 0;
    return a[n] + suffixSum(a, n - 1, m - 1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%lld\n", suffixSum(a, n - 1, m));
    return 0;
}