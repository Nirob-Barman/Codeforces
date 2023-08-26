#include <bits/stdc++.h>

using namespace std;

int removeZero(int n)
{
    int num = 0, pow = 1, reminder;

    while (n != 0)
    {
        reminder = n % 10;
        n /= 10;

        if (reminder != 0)
        {
            num += reminder * pow;
            pow *= 10;
        }
    }
    return num;
}

int main()
{
    int a, b, c, A, B, C;
    scanf("%d %d", &a, &b);
    c = a + b;
    A = removeZero(a);
    B = removeZero(b);
    C = removeZero(c);

    if (A + B == C)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}