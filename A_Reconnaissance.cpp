#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    long long ways = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (heights[j] - heights[i] <= d)
            {
                ways++;
            }
            else
            {
                break;
            }
        }
    }

    cout << ways * 2 << endl;
    return 0;
}