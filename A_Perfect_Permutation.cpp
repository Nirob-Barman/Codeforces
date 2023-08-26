#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);
    if (n % 2)
        puts("-1");
    else
    {
        for (i = 1; i <= n; i += 2)
            printf("%d %d ", i + 1, i);
    }
    return 0;
}