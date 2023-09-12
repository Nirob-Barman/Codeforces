#include <bits/stdc++.h>

using namespace std;

void printFromNTo1(int n)
{
    if (n == 0)
        return;

    if (n == 1)
        printf("%d\n", n);
    else
        printf("%d ", n);

    printFromNTo1(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printFromNTo1(n);
    return 0;
}
