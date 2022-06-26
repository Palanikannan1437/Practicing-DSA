#include <iostream>

using namespace std;

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }

    printNumbers(n - 1); // prints 1 to n-1

    cout << n << " ";
}

void printNumbersDescending(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNumbersDescending(n - 1);
}

int numberOfDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int numberOfDigitsRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = numberOfDigitsRecursive(n / 10);

    return 1 + smallAns;
}

int main()
{
    cout << numberOfDigitsRecursive(2353332);
    return 0;
}