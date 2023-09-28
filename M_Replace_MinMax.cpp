#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minIndex])
        {
            minIndex = i;
        }
        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(a[minIndex], a[maxIndex]);

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}