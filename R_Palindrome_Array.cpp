#include <bits/stdc++.h>

using namespace std;

bool isPalindromeArray(int a[], int left, int right)
{
    if (left >= right)
        return true;

    if (a[left] == a[right])
        return isPalindromeArray(a, left + 1, right - 1);
    else
        return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (isPalindromeArray(a, 0, n - 1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}