#include<iostream>
using namespace std;
int main(){
   int size = 100;
   int numsem[size], i=0, x, k, j=0;
   int grade[size];
   int sem_course[size];
   int sum[size];
   int cr_hr[size];
   float CGPA;
   float mark[size ], totalcr_hr[size ], GPA[size ], totalcr_hR, Sum;
   sum[j]=0;
   totalcr_hr[j]=0;
   Sum=0;
    totalcr_hR=0;
   CGPA=0;
   float totalSemG[size];

   cout<<"\n\n\n----------------------------------------------------\nenter the number of the semister: ";
   cin>>numsem[i];

   for(int j=0; j<numsem[i];j++){
       cout<<"\n\n\n---------------------------------------------------\nenter number of course to the semister "<<j+1<<": ";
       cin>>sem_course[i];
       for(int k=0; k<sem_course[i];k++){
           cout<<"\n\n--------------\n\nenter the mark out of 100%'of course "<<k+1<<": ";
           cin>>mark[k];
           cout<<"enter the credit hour of course "<<k+1<<": ";
           cin>>cr_hr[k];
           if(mark[k]>=85&&mark[k]<100)
               grade[k]=4;
           else if(mark[k]>=80&&mark[k]<85)
               grade[k]=3.75;
           else if(mark[k]>=75&&mark[k]<80)
               grade[k]=3.5;
           else if(mark[k]>=70&&mark[k]<75)
               grade[k]=3;
           else if(mark[k]>=65&&mark[k]<70)
               grade[k]=2.75;
           else if(mark[k]>=60&&mark[k]<65)
               grade[k]=2.5;
           else if(mark[k]>=50&&mark[k]<60)
               grade[k]=2;

           sum[j]+=grade[k]*cr_hr[k];
           totalcr_hr[j]+=cr_hr[k];
           GPA[j]=sum[j]/totalcr_hr[j];

           Sum[j]=Sum[j]+sum[j];
           totalcr_hR[j]=totalcr_hR[j]+totalcr_hr[j];
           CGPA=Sum/totalcr_hR;

           cout<<"\nYour GPA for semester "<<j+1<<" is "<<GPA[j];
           totalSemG[j] = GPA[j];
       }
   }

   for (int i = 0; i < numsem[0]; i++) {
       sum[i]=0;
       sum[i] = sum[i] + totalSemG[i];
       CGPA = sum[i] / numsem[0];
   }

   cout<<"\nThe CGPA of the "<<numsem[0]<<" semister is = "<< CGPA;

   return 0;
}


    