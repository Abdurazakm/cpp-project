#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of triangle: ";
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        if(i!=n)
        cout<<"* ";

        for (int j = 1; j < i ; j++)
        {
          cout<<"  ";
        }
        if(i != 0 && i!= n)
        cout<<"*";
        
        cout<<endl;
        
        
    }

    for(int i=0;i<n;i++)
    cout<<"* ";
    
    return 0;
}
