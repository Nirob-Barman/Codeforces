#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        string s;
        cin >> s;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "yes")
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}