#include <iostream>

using namespace std;

int exponential_power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallAns = exponential_power(x, n - 1);

    return x * smallAns;
}

int main()
{
    cout << exponential_power(4, 10);
    return 0;
}