#include <iostream>

using namespace std;

void reverseArray(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int *takeArrayInput(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " th element: ";
        cin >> arr[i];
    }
    return arr;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // taking array input
    cout << "Enter number of elements: " << endl;
    int n;
    cin >> n;
    int *arr = takeArrayInput(n);

    // reversing array
    reverseArray(arr, n);

    // printing reversed array
    cout << "Reversed Array is: " << endl;
    printArray(arr, n);
    return 0;
}