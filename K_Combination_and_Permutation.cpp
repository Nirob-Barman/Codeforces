#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int N, R;
    scanf("%d %d", &N, &R);

    long long NCR = factorial(N) / (factorial(R) * factorial(N - R));
    long long NPR = factorial(N) / factorial(N - R);

    printf("%lld %lld\n", NCR, NPR);
    return 0;
}