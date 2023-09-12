#include <bits/stdc++.h>

using namespace std;

int maxNumber(int a[], int n)
{
    if (n == 0)
        return a[0];

    int maxValue = maxNumber(a, n - 1);

    if (a[n] > maxValue)
        maxValue = a[n];

    return maxValue;
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
    printf("%d\n", maxNumber(a, n - 1));
    return 0;
}