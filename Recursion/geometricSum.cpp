#include <iostream>
#include <cmath>

using namespace std;

double geometricSumRecursive(int m, int k)
{
    if (k == 0)
    {
        return 1;
    }

    double smallAns = geometricSumRecursive(m, k - 1);

    // 1/2^0 + 1/2^
    return smallAns + (1.0 / pow(m, k));
}

int main()
{
    cout << geometricSumRecursive(2, 3);
    return 0;
}