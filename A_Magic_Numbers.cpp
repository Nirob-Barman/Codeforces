#include <bits/stdc++.h>

using namespace std;

bool isMagical(char number[])
{
    for (int i = 0; number[i]; i++)
    {
        if (number[i] != '1' && number[i] != '4')
            return false;
    }
    if (number[0] == '4')
        return false;
    if (strstr(number, "444") != NULL)
        return false;
    return true;
}

int main()
{
    char number[10];
    scanf("%s", number);

    if (isMagical(number))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}