#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, l, count = 0, x;
    char s[20];

    scanf("%s", s);

    l = strlen(s);

    for (i = 0; i < l; i++)
    {
        x = s[i] - '0';
        if (x == 4 || x == 7)
            count++;
    }
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}