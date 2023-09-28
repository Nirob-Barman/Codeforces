#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int ones = n / 10;                  // Remove the last digit
    int tens = (n / 100) * 10 + n % 10; // Remove the digit before the last digit (mainly last 2 digit) and keep the last digit
    // For example, if n is 12345, (n / 100) would be 123.
    // By multiplying by 10, we create a placeholder for the last digit
    // 123 * 10 = 1230
    // ones / reminder = n % 10
    // 1230 + 5 = 1235
    // printf("%d\n",max(n,max(ones,tens)));
    printf("%d\n", max({n, ones, tens}));
    return 0;
}