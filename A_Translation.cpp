#include <bits/stdc++.h>

using namespace std;

int main()
{
    char original[102], translated[102];
    scanf("%s", original);
    scanf("%s", translated);

    int length = strlen(original);

    bool isTranslatedCorrectly = true;

    for (int i = 0; i < length; i++)
    {
        if (original[i] != translated[length - i - 1])
        {
            isTranslatedCorrectly = false;
            break;
        }
    }

    if (isTranslatedCorrectly)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}