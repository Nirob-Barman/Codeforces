#include <bits/stdc++.h>

using namespace std;

// int calculateNCR(int N, int R)
// {
//     if (R == 0 || R == N)
//     {
//         return 1;
//     }
//     return calculateNCR(N - 1, R - 1) + calculateNCR(N - 1, R);
// }

// nCr = (n * (n - 1) * (n - 2) * ... * (n - r + 1)) / (1 * 2 * 3 * ... * r)

// int calculateNCR(int n, int r)
// {
//     if (r == 0 || r == n)
//     {
//         return 1;
//     }

//     if (n - r < r)
//     {
//         r = n - r;
//     }

//     int result = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         cout << "i: " << i << ": ";
//         result = result * (n - i + 1);
//         cout << result;
//         result /= i;
//         cout << " " << result << endl;
//     }

//     return result;
// }

// long long factorial(long long n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// long long calculateNCR(long long n, long long r)
// {
//     if (r == 0 || r == n)
//     {
//         return 1;
//     }

//     if (n - r > r)
//     {
//         r = n - r; // Use the smaller value of r for optimization
//     }

//     return (factorial(n) / (factorial(r) * factorial(n - r)));
// }

long long calculateNCR(long long n, long long r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }

    if (n - r > r)
    {
        r = n - r; // Use the smaller value of r for optimization
    }

    long long result = calculateNCR(n - 1, r - 1);
    result = result * n / r;

    return result;
}

int main()
{
    int N, R;
    scanf("%d %d", &N, &R);
    printf("%lld\n", calculateNCR(N, R));
    return 0;
}