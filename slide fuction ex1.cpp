#include<iostream>
using namespace std;
int add(int, int);
void displaynum(int n1, float n2){
    cout<<"the int number is "<<n1<<endl;
    cout<<"the double number is "<<n2<<endl;
}

int main(){
    int num1=5;
    double num2=5.5;
    //calling funtion
    displaynum(num1, num2);
    int sum;
    //calling the function and storing
    //the returned value in sum
    sum = add(100, 78);
    cout<<" 100 + 78 = "<<sum<<endl;
    return 0;
}

//function definition
int add(int a, int b){
    return(a+b);
}