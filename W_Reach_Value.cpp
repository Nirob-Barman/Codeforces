#include <bits/stdc++.h>

using namespace std;

bool canReachN(long long currentValue, long long N)
{
    if (currentValue > N)
        return false;
    if (currentValue == N)
        return true;

    return canReachN(currentValue * 10, N) || canReachN(currentValue * 20, N);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long N;
        scanf("%lld", &N);
        if (canReachN(1, N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}