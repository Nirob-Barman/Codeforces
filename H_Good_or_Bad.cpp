#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100005];
        scanf("%s", s);

        bool isGood = false;

        int len = strlen(s);
        for (int i = 0; i < len - 2; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                isGood = true;
                break;
            }
        }

        if (isGood)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    
    return 0;
}