#include <iostream>

using namespace std;

int nthFibonacci(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // assumption
    int smallAns1 = nthFibonacci(n - 1);
    int smallAns2 = nthFibonacci(n - 2);

    // calculation as fib(n) = fib(n-1)+fib(n-2)
    int ans = smallAns1 + smallAns2;
    return ans;
}

int main()
{
    cout << nthFibonacci(6);
    return 0;
}