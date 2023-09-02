// #include <bits/stdc++.h>

// using namespace std;

// const int MAXN = 1000005;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<bool> primes(MAXN, true);

//     primes[0] = primes[1] = false;

//     for (int i = 2; i * i < MAXN; i++)
//     {
//         if (primes[i])
//         {
//             for (int j = i * i; j < MAXN; j += i)
//             {
//                 primes[j] = false;
//             }
//         }
//     }

//     while (n--)
//     {
//         long long x;
//         cin >> x;

//         long long sqrt_x = sqrt(x);

//         if (sqrt_x * sqrt_x == x && primes[sqrt_x])
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000005;

bool isTPrime(long long x, vector<bool> &primes)
{
    if (x < 4)
    {
        return false;
    }

    long long sqrt_x = sqrt(x);

    if (sqrt_x * sqrt_x != x)
    {
        return false;
    }

    return primes[sqrt_x];
}

int main()
{
    int n;
    cin >> n;

    vector<bool> primes(MAXN, true);

    primes[0] = primes[1] = false;

    for (int i = 2; i * i < MAXN; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                primes[j] = false;
            }
        }
    }

    while (n--)
    {
        long long x;
        cin >> x;

        if (isTPrime(x, primes))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
