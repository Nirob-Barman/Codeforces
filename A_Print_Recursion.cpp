#include <bits/stdc++.h>

using namespace std;

void printRecursion(int n)
{
    if (n == 0)
        return;

    printf("I love Recursion\n");
    printRecursion(n - 1);
    // printf("I love Recursion\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(n);
    return 0;
}