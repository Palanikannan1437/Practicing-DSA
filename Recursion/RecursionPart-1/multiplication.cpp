#include <iostream>

using namespace std;

int multiplicationUsingRecursion(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }

    //as m*n = m*(n-1) + m
    int smallAns = multiplicationUsingRecursion(m, n - 1);

    return smallAns + m;
}

int main()
{
    cout << multiplicationUsingRecursion(5, 4);
    return 0;
}