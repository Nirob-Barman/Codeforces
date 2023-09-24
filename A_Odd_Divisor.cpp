#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if ((n & (n - 1)) == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}