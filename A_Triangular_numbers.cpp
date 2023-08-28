#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (sum < n)
    {
        sum += i;
        i++;
    }

    if (sum == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    // int test = 8 * n + 1;
    // int sqrtTest = sqrt(test);

    // if (sqrtTest * sqrtTest == test)
    // {
    //     printf("YES\n");
    // }
    // else
    // {
    //     printf("NO\n");
    // }

    return 0;
}