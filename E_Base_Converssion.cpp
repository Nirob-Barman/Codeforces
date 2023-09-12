#include <bits/stdc++.h>

using namespace std;

void decimalToBinary(int n)
{
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        decimalToBinary(n);
        printf("\n");
    }
    return 0;
}
