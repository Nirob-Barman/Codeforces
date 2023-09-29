#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int balanceOfL = 0;
    int splitCount = 0;
    string currentSplit = "";
    vector<string> splits;
    for (char c : s)
    {
        currentSplit += c;
        if (c == 'L')
            balanceOfL++;
        else
            balanceOfL--;

        if (balanceOfL == 0)
        {
            splitCount++;
            // cout << currentSplit << endl;
            splits.push_back(currentSplit);
            currentSplit = "";
        }
    }
    cout << splitCount << endl;
    for (auto str : splits)
        cout << str << endl;
    return 0;
}