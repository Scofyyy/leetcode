long long Fib(unsigned n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return Fib(n - 1) + Fib(n - 2);
}

long long Fibonacci(unsigned n)
{
    int result[2] = {0, 1};
    if (n < 2)
    {
        return result[n];
    }
    long long one = 0;
    long long two = 1;
    long long ans = 0;
    for (int i = 2; i < n; i++)
    {
        ans = one + two;
        one = two;
        two = ans;
    }
    return ans;
}