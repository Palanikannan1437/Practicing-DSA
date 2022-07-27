#include <iostream>

using namespace std;

int countZerosRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = countZerosRecursive(n / 10);

    if (n % 10 == 0)
    {
        return smallAns + 1;
    }
    return smallAns;
}
int main()
{
    cout << countZerosRecursive(1023030021);
    return 0;
}