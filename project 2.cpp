#include<iostream>
using namespace std;
int main (){
    int i=1,j=31;
    char choice,n;
    string name[100],age[100],numofpassport[100];
    cout<<"Wellcome to home page \n";
    label:
     cout<<"please press 1 for FIRST CLASS\n";
     cout<<"please press 2 for ECONOMY CALSS\n";
     cout<<"please enter your choice: ";
     cin>>choice;
    if(choice<='0'||choice>'2'||isalpha(choice)||!isalpha(choice)&&!isdigit(choice)){
       cout<<"invalid input\nplease enter correct choice from 1 up to 2\n";
       goto label;
    }
     switch (choice)
     {
         case '1':
              firstsection:
               if(i>30)
                {
                     again:
                  cout<<"The first class is FULL!\nacceptable to be placed in the economy class?\n";
                  cout<<"1 YES\n";
                  cout<<"2 NO\n";
                  cout<<"please press your choice: ";
                  cin>>n;
                  switch (n)
                  {
                      case '1':
                         goto economysection;
                      break;
                      case '2':
                         cout<<"Next flight leaves in 3 hours\n ";
                         goto thankyou;
                      break;
                      default:
                         cout<<"---invalid chioce---\n";
                        goto again;
                  }
                }
              cout<<"-----  WELLCOME TO FIRST CLASS!!  -------\n";
              cout<<"Dear custemer please fill the following form correctelly\n";
              cout<<"Name: ";
              cin.ignore();
              getline(cin,name[i]);
              cout<<"Age: ";
              getline(cin,age[i]);
              passportn:
              cout<<"passport number: ";
              cin>>numofpassport[i];
              cout<<name[i]<<" successfully done-----\nYour seat number is "<<i<<endl;
               i++;
               againnn:
              cout<<"if you want to add seat?\n";
                  cout<<"1 YES\n";
                  cout<<"2 NO\n";
                  cout<<"please press your choice: ";
                  cin>>n;
                  switch (n)
                  {
                      case '1':
                         goto label;
                      break;
                      case '2':
                         goto thankyou;
                      break;
                      default:
                         cout<<"---invalid chioce---\n";
                        goto againnn;

                     break;
                  }
              break;
                 thankyou:
                 cout<<"THANK YOU\n";
              break;
     case '2':
        economysection:
             if(j>100)
                {
                  cout<<"The ECONOMY class is FULL!\nacceptable to be placed in the FIRST class?\n";
                  cout<<"1 YES\n";
                  cout<<"2 NO\n";
                  cout<<"please press your choice: ";
                  cin>>n;
                  switch (n)
                  {
                      case '1':
                         goto firstsection;
                      break;
                      case '2':
                         cout<<"Next flight leaves in 3 hours\n ";
                         goto thankU;
                      break;
                      default:
                         cout<<"---invalid chioce---\n";
                        goto   economysection ;
                     break;
                  }
                 }
              cout<<"-----  WELLCOME TO ECONOMY SECTION!!  -------\n";
              cout<<"Dear custemer please fill the following form correctelly\n";
              cout<<"Name: ";
              cin.ignore();
              getline(cin,name[j]);
              cout<<"Age: ";
              getline(cin, age[j]);
              passportE:
              cout<<"Your passport number: ";
              cin>>numofpassport[j];
              cout<<name[j]<<" successfully done-----\nYour seat number is "<<j<<endl;
               j++;
               againn:
              cout<<"if you want to add seat?\n";
                  cout<<"1 YES\n";
                  cout<<"2 NO\n";
                  cout<<"please press your choice: ";
                  cin>>n;
                  switch (n)
                  {
                      case '1':
                         goto label;
                      break;
                      case '2':
                         goto thankU;
                      break;
                      default:
                         cout<<"---invalid chioce---\n";
                        goto againn;

                     break;
                  }
                 thankU:
                 cout<<"THANK YOU\n";
         break;
     }
    return 0;
}
