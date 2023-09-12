#include <bits/stdc++.h>

using namespace std;

int sequence(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 1)
        return 1 + sequence(3 * n + 1);
    else
        return 1 + sequence(n / 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sequence(n));
    return 0;
}