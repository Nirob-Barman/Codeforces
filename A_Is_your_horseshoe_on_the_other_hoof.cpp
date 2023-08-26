#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, a[4], c = 0, j;

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            c++;
    }
    printf("%d\n", 4 - c);
    return 0;
}