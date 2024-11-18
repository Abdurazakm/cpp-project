#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=0,j,x;
    
    char choice;
    string title[50],authory[50],year[50],boo;
    bool found=false;
    do
    { label:
       cout<<"\nlibrary managment\n";
       cout<<"press 1 to add a boo: \n";
       cout<<"press 2 to search boo: \n";
       cout<<"press 3 to find library catalogy: \n";
       cout<<"press 4 to EXIT: \n\n";
       
       cout<<"enter our choice: ";
       cin>>choice;
       switch (choice)
       {
        
       case '1':
     
        cout<<"\ntitle: ";
        cin.ignore();
        getline(cin,title[i]);
        cout<<"authory: ";
        getline(cin,authory[i]);
        cout<<"published year: ";
        getline(cin,year[i]);
        //if(!isdigit(year[i])&&!isalpha(year[i])){
         cout<<"invali input ";
        
        cout<<"boo added successfully! \n";
    
        i++;
        break;
        case '2':
       
       
        cout<<"\nenter the name of boo: ";
        cin.ignore();
        getline(cin,boo);
        for ( j = 0; j < i ; j++)
        {
            if (boo==title[j])
            {
             cout<<"\n\n";
              cout<<"boo is founded successfully!";
               cout<<"\n\n";
                cout<<"title: "<<title[j]<<"\n";
                 cout<<"authory: "<<authory[j]<<"\n";
                  cout<<"year: "<<year[j]<<"\n";
                  found=true;
                  break;

            }
                
            
        }
                  if(found==false)
                    { cout<<"the boo is not found in the library!\n";
                    }
                     break;
               
      case '3':
                       for ( x = 0; x < i; x++)
                        {
         
                           cout<<"boo_"<<x+1<<"\n\n";
                           cout<<"title: "<<title[x]<<"\n";
                           cout<<"authory: "<<authory[x]<<"\n";
                           cout<<"year: "<<year[x]<<"\n\n";
                           // break;

                        }
                           if (i==0)
                            {
                             cout<<"their is no boo in the library\n\n";
                            // break;
                            }
                            break;
      case '4':
                            cout<<"\n\nsuccessfully EXIT!\n\n";
                            break;
                            
        


        default:
        cout<<"please enter again 1-4";
        goto label;
        
        break;
       }

    } while (choice !='4');
    



    return 0;
}