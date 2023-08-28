#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++)
    {
        char word[100];
        scanf("%s", word);

        int length = strlen(word);

        if (length <= 10)
        {
            printf("%s\n", word);
        }
        else
        {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }
    }

    return 0;
}
