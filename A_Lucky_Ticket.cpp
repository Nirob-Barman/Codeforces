#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char num[n];
    scanf("%s", num);

    bool isLucky = true;

    for (int i = 0; i < n; i++)
    {

        if (num[i] != '4' && num[i] != '7')
        {
            isLucky = false;
            break;
        }
    }

    if (isLucky)
    {
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i < n / 2; i++)
        {
            leftSum += (num[i] - '0');
            // rightSum += (num[n - i - 1] - '0');
            rightSum += (num[i + n / 2] - '0');
        }

        if (leftSum == rightSum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");

    return 0;
}