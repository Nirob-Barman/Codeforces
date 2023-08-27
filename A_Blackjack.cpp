#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ways = 0;

    if (n == 11 || n == 21)
    {
        ways = 4; // Four ways using aces
    }
    else if (n >= 12 && n <= 19)
    {
        ways = 4; // Four ways using cards from 2 to 9
    }
    else if (n == 20)
    {
        ways = 15; // Special case for sum 20
    }

    cout << ways << endl;

    return 0;
}
