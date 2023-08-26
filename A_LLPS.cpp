#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[10], largest_character;
    scanf("%s", &s);
    largest_character = s[0];
    int i;
    for (i = 1; s[i]; i++)
    {
        if (s[i] > largest_character)
            largest_character = s[i];
    }
    for (i = 0; s[i]; i++)
        if (s[i] == largest_character)
            printf("%c", s[i]);
    puts("");

    return 0;
}