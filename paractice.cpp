#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;



int main(){
ofstream outClientFile( "clients.txt", ios::out ); //creating ofstream object  
                                                  //and opening a file
 // check if unable to create file
 if ( !outClientFile ) {
 cout << "File could not be opened" << endl;  
exit( 1 );
 } // end if
 int account;
 char name[30], ch='y';  
double balance;
 // read account, name and balance from cin, then place in file  
cout<< "Enter \'N\' to end input.\n? ";
 while (ch == 'y')
 {
 cout << "Enter the account, name, and balance separate by space." << endl;
 cin >> account >> name >> balance;
 outClientFile << account << ' ' << name << ' ' << balance<< endl; 
 //long pos=outClientFile.tellp();
 //cout<<"\npos"<<pos<<" ";
 //outClientFile.seekp(6,ios::beg);
 //outClientFile<<account; 
 cout << "? ";
 cin>>ch;
 } // end while
 outClientFile.close();
 ifstream inClientFile( "clients.txt", ios::in);  
// check if unable to create file
 if ( !inClientFile.is_open() ) {
 cout << "File could not be opened" << endl;  
exit( 1 );
 } // end if
  // read account, name and balance from cin, then place in file
 inClientFile.seekg(0,ios::end);
  long pos=inClientFile.tellg();
  cout<<"pos "<<pos<<endl;  
cout << "The User bank account details\n";
 cout<< "Account \t Name\t  Balance\n ";
 // inClientFile.seekg(2,ios::beg);
 while ( inClientFile.eof() == false){
   inClientFile >> account >> name >> balance;
 cout<< account << '\t' << name << '\t' << balance<< endl;  
} // end while
 inClientFile.close();
// end main
 // close ifstream file
 return 0; 
} // end main
 // // close ofstream file

