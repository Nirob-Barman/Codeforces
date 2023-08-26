#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numStops, currentCapacity = 0, maxCapacity = 0, exiting, entering;
    scanf("%d", &numStops);

    for (int i = 0; i < numStops; i++)
    {
        scanf("%d %d", &exiting, &entering);
        currentCapacity = currentCapacity - exiting;
        currentCapacity = currentCapacity + entering;
        if (currentCapacity > maxCapacity)
            maxCapacity = currentCapacity;
    }
    printf("%d\n", maxCapacity);

    return 0;
}
