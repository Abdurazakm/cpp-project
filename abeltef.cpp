#include <iostream>
#include <string>

using namespace std;
int main(){
    //int fc=30,ec=100;
    int arr1[30],arr2[100];
    int j=31,i=1;
    char confirm;
    string name[100];
    char sex;
    int age,pass_num1[30],pass_num2[70],num;
    ak:
    
    cout << "---------------------------------------" << endl;
    cout << "WELLCOME TO YOUR FLIGHT ATTENDANT."<< endl;
    cout << "Please enter your choise: \n 1.Enter 1 for first class \n 2.Enter 2 for economy class. : " << endl; 
    cin >> num;
    
    while(i<=30){
    switch(num){
        
        case 1:
            if(i>31){
            cout << "The first class is full,Would you like to make a resevation in economy class?y/n: ";
            cin >> confirm;
            if(confirm=='y'||confirm=='Y')
            goto EC;
            else if(confirm=='n'||confirm=='N'){
            cout << "The next flight leaves in 3 hour."<<endl;
            goto q;}
            }else{
            cout << "----------------------------------------" << endl;
            cout << "\tWELLCOME TO THE FIRST CLASS" << endl;
            cout << "Please Enter your name: ";
            cin.ignore();
            getline(cin,name[i-1]);
            cout << "Enter your age: ";
            cin >> age;
            do{
            cout << "Enter you sex: ";
            cin >> sex;
            if(sex=='F'||sex=='f')
                sex='F';
            else if(sex=='M'||sex=='m')
                sex='M';
            else
            cout << "invalid entry!!!! Please try again..." << endl;
            }while(sex!='f'&& sex!='F'&& sex!='m'&& sex!= 'M');
            cout << "Enter your passport number: ";
            cin >> pass_num1[i-1];
            
            cout <<"NAME: "<< name[i-1] << "\nAGE: " << age << "\nSEX: " << sex <<"\npassport number: "<<pass_num1[i-1] << endl;
            arr1[i-1]=i;
            cout<< "you seat is at number: " << i<< endl;
            i++;
            goto ak;
            q:
            int pass_to_find;
            cout << "Enter passport to find: ";
            cin >> pass_to_find;
            int index = -1;
            for (int i = 0; i < 30; ++i) {
                if (pass_num1[i] == pass_to_find) {
                    index = i;
                    break;
                }
            }if (index != -1) {
                cout << "Name: " << name[index] << endl;
            } else {
                cout << "Passport number not found." << endl;
            }
            break; }