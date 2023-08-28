#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    int percentages[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &percentages[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += percentages[i];
    }

    double averagePercentage = (double)sum / n;

    printf("%.12lf\n", averagePercentage);

    return 0;
}
