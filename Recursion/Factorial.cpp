#include <iostream>

using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1; // 0! = 1;
    }

    int smallAns = factorial(n - 1); // assumption (Recursive Case)

    int ans = n * smallAns; // calculation as n! = n * (n-1)!
    return ans;
}

int main()
{
    cout<<factorial(4);
    return 0;
}