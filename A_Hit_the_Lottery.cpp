#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int bills[] = {100, 20, 10, 5, 1};
    int countDenominations = 0;

    for (int i = 0; i < 5; i++)
    {
        // int bill = bills[i];
        // while (n >= bill)
        // {
        //     n -= bill;
        //     countDenominations++;
        // }

        int bill = bills[i];
        int numBills = n / bill;
        countDenominations += numBills;
        n %= bill;
    }

    printf("%d\n", countDenominations);
    return 0;
}