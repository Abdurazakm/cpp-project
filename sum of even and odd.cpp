#include<iostream>
using namespace std;
int main(){
    int i=0,sumofeven=0,sumofodd=0;
   for(int i=2; i<=100;i+=2){sumofeven+=i;}
   cout << "Sum of even integers between 0 and 100: " <<sumofeven <<endl;
 
   return 0;}
