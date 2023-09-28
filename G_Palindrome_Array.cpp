#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bool isPalindrome = true;
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}