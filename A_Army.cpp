#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &d[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int years = 0;
    for (int i = a; i < b; i++)
    {
        years += d[i - 1];
    }

    printf("%d\n", years);

    return 0;
}