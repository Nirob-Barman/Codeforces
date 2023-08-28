#include <bits/stdc++.h>

int main()
{
    char num1[100];
    int i;
    scanf("%s", num1);
    int length = strlen(num1);
    char num2[length];
    scanf("%s", num2);

    for (i = 0; i < length; i++)
    {
        if (num1[i] == num2[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
    
    return 0;
}
