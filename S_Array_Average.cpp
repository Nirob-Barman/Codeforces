#include <bits/stdc++.h>

using namespace std;

double arrayAverage(int a[], int i, int n)
{
    if (i == n - 1)
    {
        return a[i];
    }

    if (i == 0)
        return ((a[i] + arrayAverage(a, i + 1, n)) / n);

    return a[i] + arrayAverage(a, i + 1, n);
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
    printf("%0.6f\n", arrayAverage(a, 0, n));
    return 0;
}