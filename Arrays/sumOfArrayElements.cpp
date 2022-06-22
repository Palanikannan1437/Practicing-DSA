#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of elements: " << endl;
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " th element: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}