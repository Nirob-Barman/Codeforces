#include <bits/stdc++.h>

using namespace std;

double calculateAverage(double a[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }

    double average = calculateAverage(a, n);

    printf("%0.7lf\n", average);

    return 0;
}