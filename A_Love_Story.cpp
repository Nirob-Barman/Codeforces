#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x = "codeforces";
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != x[i])
                c++;
        }
        cout << c << endl;
    }
    return 0;
}