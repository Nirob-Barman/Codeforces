#include <bits/stdc++.h>

using namespace std;

long long Summation(int a[], int n)
{
    if (n < 0)
        return 0;
    return a[n] + Summation(a, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%lld\n", Summation(a, n - 1));
    return 0;
}