#include <bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    bool nextPrime = false;
    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            if (i == m)
                nextPrime = true;
            break;
        }
    }

    if (nextPrime)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}