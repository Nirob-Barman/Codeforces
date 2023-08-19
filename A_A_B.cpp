#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        char op;
        cin >> a >> op >> b;

        int result;

        if (op == '+')
            result = a + b;

        cout << result << endl;
    }

    return 0;
}
