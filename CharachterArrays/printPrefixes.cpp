#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "abcd";
    for (int e = 0; e < strlen(str1); e++)
    {
        for (int s = 0; s <= e; s++)
        {
            cout << str1[s] << " ";
        }
        cout << endl;
    }
    return 0;
}