#include <bits/stdc++.h>

using namespace std;

void bubbleSort(char a[])
{
    int i, j, l = strlen(a);
    char c;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }
}

int main()
{
    char a[105], b[105], c[105];
    scanf("%s %s %s", a, b, c);
    bubbleSort(a);
    bubbleSort(b);
    /// printf("%s %s\n",a,b);
    strcat(a, b);
    bubbleSort(a);
    bubbleSort(c);
    /// printf("%s %s\n",a,c);

    int i, la, lc, count = 0;
    la = strlen(a);
    lc = strlen(c);

    if (la != lc)
        printf("NO\n");
    else
    {
        for (i = 0; i < la; i++)
        {
            if (a[i] == c[i])
                count++;
        }
        if (count == la)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}