#include <bits/stdc++.h>

using namespace std;

void printFrom1ToN(int n)
{
    if (n == 0)
        return;

    printFrom1ToN(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printFrom1ToN(n);
    return 0;
}