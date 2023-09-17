#include <bits/stdc++.h>

using namespace std;

long long calculateS(int X, int N)
{
    long long result = 0;
    long long term = 1;

    for (int i = 2; i <= N; i += 2)
    {
        // cout<<i<<endl;
        term *= X * X;
        result += term;
    }

    return result;
}

int main()
{
    int X, N;
    cin >> X >> N;

    long long sum = calculateS(X, N);

    cout << sum << endl;

    return 0;
}