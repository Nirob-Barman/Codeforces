#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rounds, mishkaWins = 0, chrisWins = 0;
    cin >> rounds;

    for (int i = 0; i < rounds; i++)
    {
        int mishkaThrow, chrisThrow;
        cin >> mishkaThrow >> chrisThrow;

        if (mishkaThrow > chrisThrow)
            mishkaWins++;
        else if (chrisThrow > mishkaThrow)
            chrisWins++;
    }

    if (mishkaWins > chrisWins)
        cout << "Mishka" << endl;
    else if (chrisWins > mishkaWins)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
