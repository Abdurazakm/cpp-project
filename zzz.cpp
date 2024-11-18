#include <iostream>
#include <string.h>

using namespace std;
 bool found = false;

int main()
{
    int choice,element,j,n[20],a,b,num,y,c;
    char str[20], str2[20],ch;
   label:
    cout << "What would you like to do?\n";
    cout << "To check if a word is palindrome or not press 1\n";
    cout << "To search for an element press 2\n";
    cout << "Enter your choise: ";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Enter a word: ";
            cin >> str;
            strcpy(str2, str);
            strrev(str2);
            if (strcmp(str, str2) == 0)
            
                cout << "The word is palindrome\n";
              else
                cout << "The word is not palindrome\n";
                 break;
            
            
                case 2:
                cout<<"how mony element do you want in your list?";
                cin>>element;
                for ( j = 0; j < element; j++)
                {
                    cout<<"enter element "<<j+1<<": ";
                    cin>>n[j];
                }
                    cout <<"enter the element you want to find: ";
                    cin>>num;
                    //  bool found = false;
                  for ( a = 0; a < element; a++)
                    {
                           if (num==n[a])
                            {
                                cout<<num<<" is found in "<<a+1<<"th element\n";
                                found = true;
                                  break;
                            }
                    }
                                if (!found)
                                {
                                     cout<<"the number not found in the list";
                                }         
    }
     cout<<"\ndo want to reapet the proscess y/n";
     cin>>ch;
     if(ch=='y') goto label;    
 return 0;
}
