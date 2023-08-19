#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int c = 0, longest = 0;
        while (n--)
        {
            int num;
            scanf("%d", &num);
            if (num == 0)
            {
                c++;
            }
            else
            {
                longest = max(longest, c);
                c = 0;
            }
        }
        // only for first zero securence
        cout << max(longest, c) << endl;
    }
    return 0;
}