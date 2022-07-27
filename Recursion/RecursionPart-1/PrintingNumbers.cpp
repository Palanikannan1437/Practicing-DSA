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

int numberOfDigitsRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = numberOfDigitsRecursive(n / 10);

    return 1 + smallAns;
}

int sumOfDigitsRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = sumOfDigitsRecursive(n / 10);

    return smallAns + n % 10;
}

int main()
{
    cout << sumOfDigitsRecursive(1234);
    return 0;
}

// int numberOfDigits(int n)
// {
//     int count = 0;

//     while (n > 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }
