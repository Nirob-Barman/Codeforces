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
        if (n % 4 != 0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for (int i = 2; i <= n; i += 2)
                printf("%d ", i);
            for (int i = 1; i < n - 2; i += 2)
                printf("%d ", i);
            printf("%d\n", n + (n / 2 - 1));
        }
    }
    return 0;
}