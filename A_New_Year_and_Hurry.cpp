#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numProblems, travelTime, totalTime = 0, solvedProblems = 0;

    scanf("%d %d", &numProblems, &travelTime);

    travelTime = 240 - travelTime;

    for (int i = 1; i <= numProblems; i++)
    {
        totalTime += 5 * i;

        if (totalTime > travelTime)
        {
            break;
        }

        solvedProblems++;
    }

    printf("%d\n", solvedProblems);

    return 0;
}
