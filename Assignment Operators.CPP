#include<iostream>
using namespace std;
int main(){
    //Assignment Operators
    int a=22;
    int c;
    c=a;
    cout<<"line 1 -= operator value of c = "<<c<<endl;
    c+=a;
    cout<<"line 2 -+= operator value of c = "<<c<<endl;
     c-=a;
    cout<<"line 3 --= operator value of c = "<<c<<endl;
     c*=a;
    cout<<"line 4 -*= operator value of c = "<<c<<endl;
     c/=a;
    cout<<"line 5 -/= operator value of c = "<<c<<endl;
    c=200;
    c%=a;
    cout<<"line 6 -%= operator value of c = "<<c<<endl;
     c<<=2;
    cout<<"line 7 -<<= operator value of c = "<<c<<endl;
    c>>=2;
    cout<<"line 8 ->>= operator value of c = "<<c<<endl;
     c&=2;
    cout<<"line 9 -&= operator value of c = "<<c<<endl;
    c^=2;
    cout<<"line 10 -^= operator value of c = "<<c<<endl;
    c|=2;
    cout<<"line 11-|= operator value of c = "<<c<<endl;

   

    return 0;









}