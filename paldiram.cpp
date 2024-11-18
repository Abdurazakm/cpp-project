#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int x,i;
    char str[20],str2[20];
    cout<<"what would you lie to do? \n";
    cout<<"to checc if a word is palindrom or not press 1\n";
    cout<<"search for an element press 2\n";
    cout<<"enter your choise:";
    cin>>x;
    switch (x)
    {
    case 1:
    cout <<"enter the word ";
    cin>>str;
    strcpy(str2,str);
    strrev(str2);
    if ( strcmp(str,str2)==0)
    cout <<"the word is palindrom";
    else
      cout<<"the word is not palindrom";

    
    
    
    //     break;
    
    // default:
    //     break;
    }
















    return 0;
}