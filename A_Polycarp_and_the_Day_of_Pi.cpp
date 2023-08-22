#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        string n;
        cin >> n;

        string pi = "31415926535897932384626433832795";

        int correctDigits = 0;
        for (int i = 0; i < n.size() && i < pi.size(); i++)
        {
            if (n[i] == pi[i])
            {
                correctDigits++;
            }
            else
            {
                break;
            }
        }

        printf("%d\n", correctDigits);
    }
    return 0;
}