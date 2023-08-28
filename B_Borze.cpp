#include <bits/stdc++.h>

using namespace std;

int main()
{
    char borzeCode[201];
    scanf("%s", borzeCode);

    int length = strlen(borzeCode);

    for (int i = 0; i < length; i++)
    {
        if (borzeCode[i] == '-' && borzeCode[i + 1] == '-')
        {
            printf("2");
            i++;
        }
        else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.')
        {
            printf("1");
            i++;
        }
        else if (borzeCode[i] == '.')
        {
            printf("0");
        }
    }

    return 0;
}