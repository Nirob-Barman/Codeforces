#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k2, k3, k5, k6;
    scanf("%d %d %d %d", &k2, &k3, &k5, &k6);

    int num256 = min({k2, k5, k6});
    int num32 = min(k2 - num256, k3);

    int sum = (256 * num256) + (32 * num32);
    printf("%d\n", sum);

    return 0;
}