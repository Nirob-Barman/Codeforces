#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int chipsGiven = 0;
    int walrus = 1; // Current walrus number

    while (m >= walrus)
    {
        // cout << m << endl;
        // cout << walrus << endl;
        m -= walrus;
        walrus = (walrus % n) + 1; // Move to the next walrus or incrementing 1 to n in a cyclic manner
    }

    cout << m << endl;

    return 0;
}
