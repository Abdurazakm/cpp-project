#include <iostream>
using namespace std;

int main(){
    int fcc=30,ecc=31;
    string choise,class_choise,y_or_n,manage,search_passport_num;
    string name[101],sex[101];
    string age[101],passport_num[101];


    int password_try;


    homepage:
    cout << "\nWellcome to the home page !! "<<endl;
        cout << "  1. Assign a seat\n";
        cout << "  2. Managment(search,seat status)\n";
        cout << "  3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choise;
    switch (choise)
    {
        case '1': //assign a seat.
             cout << "--------Assigning a seat-------\n";
          assign_person:
             cout << "  1. For first class.";
                 if (fcc>30){cout << "(full)";}cout<<endl;
             cout << "  2. For economy class.";
                 if (ecc>100){cout << "(full)";}cout <<endl;

             cout << "Enter your choice: ";
             cin >> class_choise;
                 if (class_choise !='1' && class_choise !='2'){                       //error handling when choise is different from 1 or 2.
                    cout << "\nPlease enter a valid input again!!\n";
                    goto assign_person;
                 }
             
             switch(class_choise){
                case '1':
                first_class:
                     if (fcc>30){
                      full_firstclass:
                        cout << "SORRY!! The first class section is full.\n";
                        cout << "Is it acceptable to be placed in the economy section? 'Y'for yes..'N'for no.\n";
                        cin >>y_or_n;
                              y_or_n=toupper(y_or_n);
                        if (y_or_n=='Y'){goto economy_class;} 
                        else if (y_or_n=='N'){
                            cout<< "The next flight leaves in 3 hours!!\n";
                            cout<< "-----------------------------------\n";
                            goto homepage;
                        } 
                        else {
                            cout << "Please enter a valid input!!\n";    //error handling
                            goto full_firstclass;
                        }   
                     }
                     else {
                        cin.ignore();
                        cout << "Enter your name: ";
                        getline(cin,name[fcc]);
                        cout << "Enter your sex: ";
                        getline(cin,sex[fcc]);
                        cout << "Enter youe age: ";
                        cin>>age[fcc];
                        cout << "Enter your passport number: ";
                        cin>>passport_num[fcc];
                             cout<< "--------------------------\n";
                             cout << "SEAT ADDED SUCCESFULLY!!\n";
                             cout<< "--------------------------\n";
                             cout <<"Your seat number is "<<fcc<<endl;
                         ++fcc;
                         cout << "If you want to add again press 'Y' OR any key to go to home page: ";   
                         cin >> y_or_n;
                                y_or_n=toupper(y_or_n);
                            if (y_or_n=='Y'){goto assign_person;}
                            else {goto homepage;}    
                     }