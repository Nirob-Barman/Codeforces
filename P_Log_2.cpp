#include <bits/stdc++.h>

using namespace std;

long long Log2(long long n)
{
    if (n == 1)
        return 0;
    return 1 + Log2(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", Log2(n));
    return 0;
}