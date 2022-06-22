#include <iostream>

using namespace std;

void reverse(char input[], int n)
{
    int s = 0;
    int e = n - 2; // since n is given to getline, it means we can input n-1
    // length ka input,hence index of last char in input is at n-2 index
    while (s < e)
    {
        swap(input[s], input[e]);
        s++;
        e--;
    }
}

int main()
{
    cout << "Enter number of elements: " << endl;
    int n;
    cin >> n;
    cin.get(); // for consuming the newline charachter
    char input[n];
    cin.getline(input, n);
    reverse(input, n);
    cout  << input;
    return 0;
}