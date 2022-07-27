#include <iostream>

using namespace std;

int sumOfArrayRecursive(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallArraySum = sumOfArrayRecursive(arr + 1, n - 1);

    return smallArraySum + arr[0];
}

// if value of index is k then we are passing array starting with index k
int sumOfArrayRecursiveUsingIndex(int arr[], int n, int i)
{
    if (i == n)
    {
        return 0; // if the index i is greater than n-1 i.e. n, then it means that
                  //  the array is over and array starting with index n is an empty array
    }

    int smallArraySum = sumOfArrayRecursiveUsingIndex(arr, n, i + 1);

    return smallArraySum + arr[i];
}
int main()
{
    int arr[] = {1, 32, 4, 35, 2};
    cout << sumOfArrayRecursiveUsingIndex(arr, 5, 0);
    return 0;
}