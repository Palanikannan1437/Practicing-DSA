#include <iostream>

using namespace std;

bool isArraySorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    bool isSmallArraySorted = isArraySorted(arr + 1, n - 1);

    if (isSmallArraySorted)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 44, 5};
    if (isArraySorted(arr, 5))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}