#include<iostream>
#include<string>
using namespace std;
int main(){
    int const size=100;
    float numstudents,numcourse,mark,CGPA,GPA,sum,point,numsemester,namestudent,grade,i,j,k;
    
    cout<<"enter the number of the student: ";
    cin>>numstudents;
    for ( i = 0; i< numstudents; i++)
    {
        cout<<"enter the name of student "<<i+1<<": ";
        cin>>namestudent;
        cout<<"enter the number of the semester "<<i+1<<": ";
        cin>>numsemester;
        cout<<"enter the number the of course do you take student "<<i+1<<": ";
        cin>>numcourse;
        for ( j = 0; j < numcourse; j++)
        {
           cout<<"enter the mark out of 100% "<<j+1<<": ";
           cin>>mark;
           if (mark>=85&&mark<90)
           {
            grade = 'A';
            point=4;}
            else if (mark>=80&&mark<85)
            {
                 grade = 'A';
            point=3.75;}
            else if (mark>=75&&mark<80)
            {
               grade = 'B';
            point=3.5;}
            else if (mark>=70&&mark<75)
            {
               grade = 'B';
            point=3;}
            else if (mark>=65&&mark<70)
            {
               grade = 'B';
            point=2.75;}
            else if (mark>=60&&mark<65)
            {
               grade = 'C';
            point=2.5;}
            else if (mark>=50&&mark<60)
            {
               grade = 'C';
            point=2;}
            else if (mark>50&&mark<0)
            {
               grade = 'F';
               point=0;
            }
            

            sum=0;
            sum+=point;

            
            GPA=sum/numcourse;
            cout<<"GPA of semester "<<i+1<<" is "<<GPA;

        
            
           }
           
         GPA=sum/numcourse;
            cout<<"GPA of semester "<<i+1<<" is "<<GPA;
            CGPA=(CGPA+GPA)/numsemester;
        
    }
    

 cout<<"GPA of semester "<<numsemester<<" is "<<CGPA;



return 0;

}