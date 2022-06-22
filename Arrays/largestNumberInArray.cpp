#include <iostream>

using namespace std;

int main()
{
    cout << "Enter number of elements: " << endl;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " th element: ";
        cin >> a[i];
    }
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << largest;
    return 0;
}