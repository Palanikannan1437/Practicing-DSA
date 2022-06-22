#include <iostream>

using namespace std;

void reverseArray(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
}

int *takeArrayInput(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " th element: ";
        cin >> a[i];
    }
    return a;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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