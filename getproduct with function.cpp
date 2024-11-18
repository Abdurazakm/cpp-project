/* For a function named getProduct and that has parameters namely num1 and
 num2 which their data type is integer and double respectively and that should
 multiply the integer value by the double number and then return the result as a
 double number.
 • Write a function declaration (prototype) for the getProduct function.
 • Write the function call statement to the getProduct function, and assigning 
its return value to a product variable. 
• Name the actual arguments firstNum and secondNum. */
#include<iostream>
#include <cmath>
using namespace std;
double getproduct(int num1, double num2);
double add(double num1, double num2);
double calcquationt(double n1,double n2,double &answerr);
int main(){
    double product,a,b,num1,num2,quationt;
    int firstnum;
    double secondnum;
    product=getproduct(firstnum, secondnum);
    cout<<"the produnct of the two number: "<<product<<endl;
    cout<<"enter the  two number: ";
    cin>>a>>b;
    double answer=add(a,b);
    cout<<"the sum of the two number: "<<answer<<endl;
    quationt=calcquationt(num1,num2,quationt);
    cout<<"quationt = "<<quationt<<endl;    

    return 0;

}
double getproduct(int num1, double num2){
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
  return num1*num2;
}
double add(double num1, double num2){
    double cube=num1*num1*num1;
    double squareroote=sqrt(num2);
    return cube+squareroote;

}
double calcquationt(double n1,double n2,double &answerr){
    cout<<"enter the first numbert: ";
    cin>>n1;
    cout<<"enter the second number: ";
    cin>>n2;
    answerr=n1/n2;
    return answerr;
}
