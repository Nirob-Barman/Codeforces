#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, length, uppercaseCount = 0, lowercaseCount = 0;
    char word[100];
    scanf("%s", word);
    length = strlen(word);

    for (i = 0; i < length; i++)
    {
        if (isupper(word[i]))
            uppercaseCount++;
        else if (islower(word[i]))
            lowercaseCount++;
    }

    if (uppercaseCount > lowercaseCount)
    {
        for (i = 0; i < length; i++)
        {
            word[i] = toupper(word[i]);
            // word[i] = word[i] - 32;
        }
        printf("%s\n", word);
    }
    else
    {
        for (i = 0; i < length; i++)
        {
            word[i] = tolower(word[i]);
            // word[i] = word[i] + 32;
        }
        printf("%s\n", word);
    }

    return 0;
}
