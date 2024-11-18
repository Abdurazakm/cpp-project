 #include<iostream>
#include <cstring>
using namespace std;
int magic_fun(int x, int y){
    cout<<"in magic function x= "<<x<<"y= "<<y<<endl;
    {
    int x=y;
     cout<<"in nested block x= "<<x<<"y= "<<y<<endl;

    }
    y++;
     cout<<"in magic function again x= "<<x<<"y= "<<y<<endl;
     return x;

}
int main(){
    int v=8,w=6;
    w=magic_fun(w,v);
    cout<<"in main block v = "<<v<<"w = "<<w<<endl;
    return 0;
}