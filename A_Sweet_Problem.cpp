#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, temp;

        scanf("%d %d %d", &a, &b, &c);

        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        if (c <= a + b)
            printf("%d\n", (a + b + c) / 2);
        else
            printf("%d\n", a + b);
    }
    return 0;
}