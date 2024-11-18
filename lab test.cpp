#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int i;
    char str[100], str1[100];
    cout << "enter the name ";
    cin.getline(str, 100);
   // strcpy(str1, str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
            cout << str[i];
        else if (isspace(str[i]))
            cout << str[i];
    }

    return 0;
}