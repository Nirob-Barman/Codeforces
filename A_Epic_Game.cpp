#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    bool simonTurn = true;

    while (n > 0)
    {
        int stonesToTake;

        if (simonTurn)
        {
            stonesToTake = gcd(a, n);
        }
        else
        {
            stonesToTake = gcd(b, n);
        }

        n -= stonesToTake;

        if (n == 0)
        {
            if (simonTurn)
            {
                printf("0\n"); // Simon wins
            }
            else
            {
                printf("1\n"); // Antisimon wins
            }
            break;
        }

        simonTurn = !simonTurn; // Switch turns
    }

    return 0;
}
