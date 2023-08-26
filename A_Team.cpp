#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, implement = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
            implement++;
    }
    printf("%d\n", implement);
    return 0;
}