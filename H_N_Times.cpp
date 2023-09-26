#include <bits/stdc++.h>

using namespace std;

void printCharacterNTimes(int N, char C)
{
    for (int i = 0; i < N; i++)
    {
        printf("%c ", C);
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        char C;
        scanf("%d %c", &N, &C);

        printCharacterNTimes(N, C);
    }
    
    return 0;
}