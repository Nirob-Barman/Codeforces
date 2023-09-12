#include <bits/stdc++.h>

using namespace std;

int countVowels(char s[], int index)
{
    if (index == 0)
        return 0; // 0 for counting vowels

    char ch = s[index - 1];
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1 + countVowels(s, index - 1);
    }
    else
        return countVowels(s, index - 1);
}

int main()
{
    char s[205];
    gets(s);
    int len = strlen(s);
    printf("%d\n", countVowels(s, len));
    return 0;
}