#include <iostream>
#include <cstring>

using namespace std;

void strconcat(char str1[], char str2[])
{
    int j = 0;
    for (int i = strlen(str1); j <= strlen(str2); i++)
    {
        str1[i] = str2[j];
        j++;
    }
}

int main()
{
    char str1[] = {'a', 'k', 'a', 's', 'h', '\0'};
    char str2[] = {'c', 'u', 'b', 'e', 'r', 's', '\0'};
    strconcat(str1, str2);
    cout << str1 << " " << str2;
    return 0;
}