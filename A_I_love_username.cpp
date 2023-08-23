#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, c = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int Max = a[0], Min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
            c++;
        }
        if ((a[i] > Max))
        {
            Max = a[i];
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}