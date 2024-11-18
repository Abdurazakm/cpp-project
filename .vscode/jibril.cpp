#include<iostream>
using namespace std;
int main(){
float salary,tax,netsalary;
cout<<"enter your salary: ";
cin>>salary;
tax=salary*0.15;
netsalary=salary-tax;
cout<<"tax: "<<tax<<"\nnet salary: "<<netsalary;
return 0;



}