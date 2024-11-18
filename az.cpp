#include<iostream>
using namespace std;
int main(){
    /*) Given below constants 
Base pay rate = 180.25 ETB
regular work hours <= 40 hrs.
Over time payment rate = 120 ETB
Write a program that read hours worked and calculate hourly 
wages, overtime and total wages.*/
float BPR=180.25,OTPR,RWH,TW,OT,OTR=120;
cout<<"eneter RWH: ";
cin>>RWH;
TW=RWH*BPR;
cout<<"total wage(TW) = "<<TW;
cout<<"\n\n-----------\n\n";
OT=(RWH>40?(RWH-40)*120:0);
TW=TW+OT;
cout<<TW;
return 0;













}