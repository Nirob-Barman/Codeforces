#include <bits/stdc++.h>

using namespace std;

int main()
{
    char question[100];
    // scanf(" %[^\n]", question);
    gets(question);

    int len = strlen(question);
    
    char lastLetter;
    for (int i = len - 1; i >= 0; i--)
    {
        if (isalpha(question[i]))
        {
            lastLetter = tolower(question[i]);
            break;
        }
    }

    if (lastLetter == 'a' || lastLetter == 'e' || lastLetter == 'i' ||
        lastLetter == 'o' || lastLetter == 'u' || lastLetter == 'y')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}