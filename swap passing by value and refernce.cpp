// #include<iostream>
// using namespace std;
// void swap(float &first, float &second);
// int main(){
//     int x=5,y=6;
//     cout<<"before: x="<<x<<" y="<<y;
//     swap(x,y);
//     cout<<"\nafter x="<<x<<" y="<<y;
//     return 0;
// }
// void swap(float &first, float &second){
//     int tamp;
//     tamp=first;
//     first=second;
//     second=tamp;
// }


#include<iostream>
using namespace std;
// void calc(double, double,double, double &, double &);
// int main(){
//     double firstnum,secnum,thirdnum,sum,product;
//     cout<<"enter three number: ";
//     cin>>firstnum>>secnum>>thirdnum;
//     calc(firstnum,secnum,thirdnum,sum,product);
//     cout<<"\n the sum of the three number: "<<sum<<endl;
//     cout<<"the product of the numbers is: "<<product<<endl;
//     return 0;
// }
// void calc(double num1, double num2, double num3, double &total, double &product)
// {
//     total=num1+num2+num3;
//     product=num1*num2*num3;
// }

//global and local variable
void thisfunc(int);
int m2=5;
int main(){
    int m1;
    m1=1,m2=21;
    thisfunc(m1);
    cout<<"m1="<<m1<<" "<<"m2="<<m2<<endl;
    return 0;
}
void thisfunc(int a)
{
    int m2;
    m2=a+9; 
    a++;
    cout<<"a= "<<a<<" m2 "<<m2<<", ";
}