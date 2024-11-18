#include<iostream>
using namespace std;
int main(){
    int a=21;
    int c;
    cout<<"\n\n-----------------\n\n";
    c=++a; //prefix increament
    cout<<"value of c after assigned ++a "<<c<<endl;//c=a+1=22
    cout<<"value of a after assigned ++a "<<c<<endl;//a=c=22
    cout<<"\n\n-----------------\n\n";
    c=a++;//postefix increament c=a
    cout<<"value of c after assigned a++ "<<c<<endl;//c=a=22
    cout<<"value of a after assigned a++ "<<a<<endl;//a=1+a=23
    cout<<"\n\n-----------------\n\n";
    c=--a; //prefix decreament
    cout<<"value of c after assigned --a "<<c<<endl;//c=a-1=22
    cout<<"value of a after assigned --a "<<a<<endl;//a=c=22
    cout<<"\n\n-----------------\n\n";
    c=a--;//postefix decreament c=a
    cout<<"value of c after assigned a-- "<<c<<endl;//c=a=22
    cout<<"value of a after assigned a-- "<<a<<endl;//a=1+a=23
    cout<<"\n\n-----------------\n\n";
    return 0;
    





    
}