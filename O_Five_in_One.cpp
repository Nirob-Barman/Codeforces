#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int n)
{
    int original = n;
    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int countDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisorCount = 0;
    int maxDivisorNum = 0;

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > maxNum)
            maxNum = num;
        if (num < minNum)
            minNum = num;
        if (isPrime(num))
            primeCount++;
        if (isPalindrome(num))
            palindromeCount++;
        int divisorCount = countDivisors(num);
        if (divisorCount > maxDivisorCount)
        {
            maxDivisorCount = divisorCount;
            maxDivisorNum = num;
        }
        else if (divisorCount == maxDivisorCount && num > maxDivisorNum)
        {
            maxDivisorNum = num;
        }
    }

    printf("The maximum number : %d\n", maxNum);
    printf("The minimum number : %d\n", minNum);
    printf("The number of prime numbers : %d\n", primeCount);
    printf("The number of palindrome numbers : %d\n", palindromeCount);
    printf("The number that has the maximum number of divisors : %d\n", maxDivisorNum);

    return 0;
}
