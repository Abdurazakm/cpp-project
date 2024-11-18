
#include<iostream>
using namespace std;
int main(){
    int x,a,b,c;
    cout<<"what you want to do???"<<endl;
    cout<<"if you want to check whether the number is positive or negative press 1"<<endl;
    cout<<"if you want to check whether the number is even or odd press 2"<<endl;
    cout<<"if you want to check which number is largest one among three number press 3"<<endl;
    cout<<"\n\n";
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
    cout<<"press your choice: ";
    cin>>x;
    switch(x){
    case 1:
        cout<<"enter your number you want to know the number positive or negative: ";
        cin>>a;
        if(a>0)
    cout<<"the number entered you is "<<a<<" which is positive \n-------------------------------"<<endl;
    else
        cout<<"the number entered you is"<<a<<"which is negative\n------------------------------- "<<endl;
    case 2:
        cout<<"enter your number: ";
    cin>>b;
    if(b % 2 == 0)
        cout<<"the number "<<b<<" is even\n----------------------------"<<endl;
    else
    cout<<"the number is odd\n---------------------------------"<<endl;
    case 3:
        cout<<"enter the first number: ";
        cin>>a;
        cout<<"enter the second number: ";
        cin>>b;
        cout<<"enter the third number: ";
        cin>>c;
        if(a>b&&a>c)
            cout<<a<<" is largest number"<<endl;
        else if(b>a&&b>c)
        cout<<b<<" is largest number "<<endl;
        else
            cout<<c<<" is largest numbe ";



        return 0;



}    }
