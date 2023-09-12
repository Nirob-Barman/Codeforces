#include <bits/stdc++.h>

using namespace std;

bool isAchieveX(int a[], int n, int x, int currentSum, int currentIndex)
{
    if (currentIndex == n)
        return currentSum == x;

    if (isAchieveX(a, n, x, currentSum + a[currentIndex], currentIndex + 1))
        return true;
    if (isAchieveX(a, n, x, currentSum - a[currentIndex], currentIndex + 1))
        return true;

    return false;
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int currentSum = a[0];
    int currentIndex = 1;
    if (isAchieveX(a, n, x, currentSum, currentIndex))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}