#include<iostream>
#include <iomanip>
using namespace std;
struct employee{
    int empl_id[100];
   string name_empl[100];
   float netsalar,incometax,gross_salar;
};
void net_salar(employee emp[100],int num){
    for(int i=0;i<num;i++){
    if (emp[i].gross_salar>=10000)
    {
       emp[i].incometax=emp[i].gross_salar*0.35;
    }
    else if (emp[i].gross_salar>=5000)
    {
       emp[i].incometax=emp[i].gross_salar*0.2;
    }
     else if (emp[i].gross_salar>=3000)
    {
       emp[i].incometax=emp[i].gross_salar*0.1;
    }
     else if (emp[i].gross_salar<3000)
    {
       emp[i].incometax=emp[i].gross_salar*0;
    }
     emp[i].netsalar=emp[i].gross_salar-emp[i].incometax;
    }


}

int main(){
    int num_of_employee;
    cout<<"how many employee: ";
    cin>>num_of_employee;
    employee emp[num_of_employee];
    for(int i=0; i<num_of_employee;i++){
        cout<<"enter employee id "<<i+1<<": ";
        cin>>emp[i].empl_id[i];
        cout<<"enter employee name "<<i+1<<": ";
        cin>>emp[i].name_empl[i];
        cout<<"enter employee gross salar "<<i+1<<": ";
        cin>>emp[i].gross_salar;
    }
  net_salar(emp,num_of_employee);
    cout<< setw(20) << left <<"employee id"<< setw(20) << left <<"employee name"<< setw(20) << left <<"net salr"<<endl;
    for (int i = 0; i < num_of_employee; i++){
    cout<< setw(20) << left <<emp[i].empl_id[i]<< setw(20) << left <<emp[i].name_empl[i]<< setw(20) << left <<emp[i].netsalar<<endl;
    }
    cout<<"search for employee using id nameber\nenter the employee id number: ";
    cin>>emp[num_of_employee].empl_id[num_of_employee];
for(int i=0; i<num_of_employee;i++)
    {
        if (emp[num_of_employee].empl_id[num_of_employee]==emp[i].empl_id[i])
        {
           cout<< setw(20) << left <<"employee id"<< setw(20) << left <<"employee name"<< setw(20) << left <<"net salr"<<endl;
           cout<< setw(20) << left <<emp[i].empl_id[i]<< setw(20) << left <<emp[i].name_empl[i]<< setw(20) << left <<emp[i].netsalar<<endl;
        }

    }

    return 0;
}

