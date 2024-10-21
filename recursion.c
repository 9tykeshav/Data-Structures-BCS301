// Online C compiler to run C program online
#include <stdio.h>

int gcdEuclidean(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        if (a > b)
        {
            return gcdEuclidean(a % b, b);
        }
        else
        {
            return gcdEuclidean(a, b % a);
        }
    }
}

int gcd(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
}

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int sumOfArray(int a[], int n, int i, int sum)
{
    if (i == n - 1)
    {
        return a[n - 1];
    }
    else
    {
        return a[i] + sumOfArray(a, n, i + 1, sum);
    }
}

int main()
{
    // int a, b ;
    // scanf("%d%d", &a,&b);
    // printf("%d", gcdEuclidean(a,b));
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d", sumOfArray(a, 5, 0, 0));

    return 0;
}