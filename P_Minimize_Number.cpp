#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bool allEven = true;
    int operations = 0;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
            {
                allEven = false;
                break;
            }
            a[i] /= 2;
        }

        if (allEven)
            operations++;
        else
            break;
    }
    printf("%d\n", operations);

    return 0;
}