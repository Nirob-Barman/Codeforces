#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    // Calculate the maximum number of toasts based on each ingredient
    int maxToastsDrink = (k * l) / nl;
    int maxToastsLime = (c * d);
    int maxToastsSalt = p / np;

    // Find the limiting factor among the ingredients
    int limitingFactor = min({maxToastsDrink, maxToastsLime, maxToastsSalt});

    // Calculate the number of toasts each friend can make
    int toastsPerFriend = limitingFactor / n;

    printf("%d\n", toastsPerFriend);

    return 0;
}
