#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    scanf("%s", &s);
    int i, len, j, c = 0;
    for (i = 0; s[i]; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
                break;
        }
        if (i == j)
            c++;
    }
    /// printf("%d\n",c);
    if (c % 2 == 0)
        puts("CHAT WITH HER!");
    else
        puts("IGNORE HIM!");
    return 0;
}