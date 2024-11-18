#include<iostream>
using namespace std;
int main(){
    float mathimatics,english,chemistry,physics,average,biology;
    int x;
    cout<<"\n\n\n------------------------\n\n\n";
 
    cout<<"The socore of each coures\nThe name of coures\t\t\tthe score of coures\n";
    cout<<"english\t\t\t\t\t";
    cin>>english;
    cout<<"mathimatics\t\t\t\t";
    cin>>mathimatics;
    cout<<"chemistry\t\t\t\t";
    cin>>chemistry;
    cout<<"biology\t\t\t\t\t";
    cin>>biology;
    cout<<"physics\t\t\t\t\t";
    cin>>physics;
    cout<<"what you want to see?"<<endl;
    cout<<"if you to see the average of 5 course press 1\n";
    cout<<"if you to see the the grade of 5 course press 2\n";
    cout<<"press your choise: " ;
    cin>>x;  
    switch (x)
    {
    case 1:
    cout <<"\nthe average of five course is equal = ("<<english<<" + "<<mathimatics<<" + "<<chemistry<<" + "<<biology<<" + "<<physics<<")/5";
    average=(english+mathimatics+chemistry+biology+physics)/5;
  
    cout<<"\n"<<"The averege of five course = "<<average;
    break;
    case 2:
    if (average>=90&&average<=100)
    cout<<"\nthe grade is: A";
    else if (average>=75&&average<90)
    cout<<"\nthe grade is: B";
    else if (average>=50&&average<75)
    cout<<"\nthe grade is: B";
    else if (average>=0&&average<50)-
    cout<<"\nthe grade is: A";
    else cout<<"invalid";
    
    }



    return 0;











}