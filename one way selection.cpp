#include<iostream>
using namespace std;
int main(){
    int W_Hr,OT;
    cout<<"enter work hour: ";
    cin>>OT; 
    if( W_Hr>40){
         OT=( W_Hr-40)*120;
           cout<<"over time = "<<OT;

    }







    return 0;
}