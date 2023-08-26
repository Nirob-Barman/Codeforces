#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        sort(a, a + n);

        bool possible = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                possible = false;
                break;
            }
        }
        if (possible)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}