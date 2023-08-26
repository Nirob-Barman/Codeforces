#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int pairCount = 0;

    for (int a = 0; a <= int(sqrt(n)); a++)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            pairCount++;
        }
    }

    cout << pairCount << endl;
    return 0;
}