#include<iostream>
using namespace std;
int main(){
   const float size=100;
  int n[size],n,i,j,k, mark[size][size][size],n[size],grade[size][size][size],sum[size][size][size],GPA[size][size][size];

  cout<<"enter the number of student: ";
  cin>>n;
  for ( i = 0; i < n ; i++)
  {
   cout<<"enter the number of semester who take student "<<i+1<<": ";
   cin>>n[i];
   for ( k = 0; k < n[i]; k++)
   {
   cout<<"enter the number of course for semester "<<k+1<<": ";
   cin>>n[k];
   for ( j = 0; j < n[k]; i++)
   {
    cout<<"enter mark out of 100% "<<j+1<<": ";
    cin>>mark[j][i][k];
        if(mark[j][i][k]>=85&&mark[j][i][k]<100)
        grade[j][i][k]=4;
        else if(mark[j][i][k]>=80&&mark[j][i][k]<85)
        grade[j][i][k]=3.75;
        else if(mark[j][i][k]>=75&&mark[j][i][k]<80)
        grade[j][i][k]=3.5;
        else if(mark[j][i][k]>=70&&mark[j][i][k]<75)
        grade[j][i][k]=3;
         else if(mark[j][i][k]>=65&&mark[j][i][k]<70)
        grade[j][i][k]=2.75;
         else if(mark[j][i][k]>=60&&mark[j][i][k]<65)
        grade[j][i][k]=2.5;
         else if(mark[j][i][k]>=50&&mark[j][i][k]<60)
        grade[j][i][k]=2;
         sum[j][i][k]+=grade[j][i][k]*3;
   }
   GPA[j][i][k]=sum[j][i][k]/3*n[k];
    cout<<"\nYour GPA for semester "<<j+1<<" is "<<GPA[j];
   }
   


  }
  












    return 0;
}