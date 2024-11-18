#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str2[20],str1[20];
    cout<<"enter the name";
    cin>>str2;
    strncat(str1,str2,3);
    cout<<str1;
    return 0;
}