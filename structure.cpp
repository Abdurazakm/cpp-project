/*
 Write a program accepts ID, name and mark of list of students (using structure) and displays the
 students who have scored marks greater than 20 out of 30 in an exam. The total number of students
 who took the test is to be entered from the keyboard.
 */
#include<iostream>
using namespace std;
struct student
{
    int ID;
    char name[20];
    float mark;

};

void accept(student stu[], int &n){
    cout<<"how many student took a course: ";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"enter ID: ";
        cin>>stu[i].ID;
        cout<<"enter the name: ";
        cin>>stu[i].name;
        cout<<"enter the mark: ";
        cin>>stu[i].mark;
    }
    void display(student stu[], int n){
        cout<<"ID\t\t"<<"name\t\t"<<"mark\t\t"<<endl;
        for (int i = 0; i < n; i++)
        {
            if (stu[i].mark>20)
            {
                cout<<stu[i].ID<<"\t\t"<<stu[i].name<<"\t\t"<<stu[i].mark<<"\t\t"<<endl;
            }

        }

    }

}
int main(){
    student stu[50];
    int n;
    accept(stu,n);
    display(stu,n);

    return 0;
}
