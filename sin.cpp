#include<iostream>
#include<cmath>
#define PI 3.1415926536
using namespace std;
int main(){
    int w=15,x=20,y=70,z=140,a=30,E,F;
   
    float i=PI/180;
    cout<<"angle\t\t15\t\t20\t\t70\t\t140\n";
    cout<<"sin\t\t"<<sin(w*i)<<"\t"<<sin(x*i)<<"\t\t"<<sin(y*i)<<"\t"<<sin(z*i)<<"\n";
    cout<<"cos\t\t"<<cos(w*i)<<"\t"<<cos(x*i)<<"\t"<<cos(y*i)<<"\t\t"<<cos(z*i)<<"\n";
    cout<<"tan\t\t"<<tan(w*i)<<"\t"<<tan(x*i)<<"\t\t"<<tan(y*i)<<"\t\t"<<tan(z*i)<<"\n";





    return 0;
}

