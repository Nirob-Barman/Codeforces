#include <bits/stdc++.h>

using namespace std;

void printDigits(int n)
{
    if (n == 0)
        return;

    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printDigits(n);
        if (n == 0)
            printf("0");
        printf("\n");
    }
    return 0;
}
