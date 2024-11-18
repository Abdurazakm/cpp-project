#include<iostream>
using namespace std;
int main(){
    int week;
    cout<<"\n\n----------------\n\n";
    cout<<"if want you to know the day of week press one number from 1 up to 7\n";
    cout<<"press your choice: ";
    cin>>week;
    switch (week)
    {
    case 1:
    cout<<"monday";
        break;
     case 2:
    cout<<"tusday";
        break;
     case 3:
    cout<<"wodnsaday";
        break;
     case 4:
    cout<<"thursday";
        break;
     case 5:
    cout<<"friday";
        break;
     case 6:
    cout<<"satarday";
        break;
     case 7:
    cout<<"sunday"; 
    default:
        cout<<"invalid input";
    }





    return 0;



}