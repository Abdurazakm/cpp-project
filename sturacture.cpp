#include <iostream>
#include <string>
using namespace std;
struct student
{
    int roll;
    string name;
    float mark[10];
};
int main(){
    student stud[10];
    for (int i = 0; i < 2; i++)
    {
        cout<<"enter roll number: ";
        cin>>stud[i].roll;
        cout<<"enter your name: ";
        cin>>stud[i].name;
        cout<<"enter your marks: \n";
        for (int j = 0; j < 3; j++)
        {
           cout<<"enter mark for course "<<j+1<<": ";
           cin>>stud[i].mark[j] ;
        }
        
    }
    cout<<"roll number  name  mark "<<endl;
    for (int i = 0; i <2; i++)
    {
        cout<<stud[i].roll<<"  "<<stud[i].name<<"  ";
        for (int j = 0; j < 3; j++)
        {
            cout<<"course "<<i+1<<" "<<stud[i].mark[j]<<", ";
        }
        cout<<"\n";
        
    }
    return 0;
    
}
