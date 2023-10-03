#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}
