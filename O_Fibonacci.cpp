#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n - 1));
    return 0;
}