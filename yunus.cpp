#include<iostream>
using namespace std;
int main(){
    float sum=0,n;
    cout<<"\n\n\n--------------\n\n";
    cout<<"enter the thwe number you want sum ";
    cin>>n;
    for(int x=1; x<=n; x++ ){sum=sum+x;}
    cout<<"the sum of 1 up to "<<n<<" is = " <<sum<<"\n";
    cout<<"thank you !!\n";
    float average;
    average=sum/n;
    cout<<"the average of the "<<sum<<" equals to "<<average;

    return 0;
}