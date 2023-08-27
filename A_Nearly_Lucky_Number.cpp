#include <bits/stdc++.h>

using namespace std;

int main()
{
    int index, length, luckyCount = 0, digit;

    char input[20];
    scanf("%s", input);

    length = strlen(input);

    for (index = 0; index < length; index++)
    {
        digit = input[index] - '0';
        if (digit == 4 || digit == 7)
            luckyCount++;
    }

    if (luckyCount == 4 || luckyCount == 7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
