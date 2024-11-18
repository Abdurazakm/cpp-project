#include<iostream>
using namespace std;
int sum(int num);
void halfofsum(float num);
int main()
{
  int num,total_sum;
    cout<<"enter the number: ";
    cin>>num;
    total_sum=sum(num);
    cout<<"the sum of the two number is "<<total_sum<<endl;
    halfofsum(total_sum);
}
int sum (int num)
{
   float sum=0;
    for(int i = 1;i<=num;++i){
        sum=sum+i;
       
    }
     return sum;
}
void halfofsum(float n)
{
    cout<<"the half of sum 1 up to "<<n<<" is equal to "<<n/2;
}