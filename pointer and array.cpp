// #include <iostream> 
// using namespace std;
// int main(){
// int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};
// for (int i = 0; i < 3; i++)
// { cout<<"\nThe 1st Address of "<<i<<"th array = "; 
// cout<<*(arr + i); //arr[i]
// cout<<"\n"<<i+1<<" Address of "<<i<<" row elements "; 
// for (int j = 0; j < 4; j++) 
// cout<<(*(arr + i) + j)<<" "; //arr[i]+j
// cout<<"\n"<<i+1<<" row elements: "; 
// for (int j = 0; j < 4; j++) 
// cout<<*(*(arr + i) + j)<<" ";
// cout<<endl;
// }
// return 0;
// }
// #include<iostream> 
// #include<string.h> 
// using namespace std;

// int main() {
    // char *names[] = {"Mengistu", "Abera", "Chala", "Barega", "Hawi"};
    // int len = strlen(names[1]);

    // Length of 2nd string
    // cout << "Originally:\n\tstring 2 is ";
    // cout.write(names[1], len).put('\n');
    // cout << "\tand string 4 is ";
    // cout.write(names[3], len).put('\n');

    // // Now exchange the position of string 2 and 4
    // char *tptr = names[1];
    // names[1] = names[3];
    // names[3] = tptr;

    // // Now print the exchanged strings
    // cout << "\nExchanged: \n\tstring 2 is ";
    // cout.write(names[1], len).put('\n');
    // cout << "\tand string 4 is ";
    // cout.write(names[3], len).put('\n');
#include <iostream>
#include<string.h> 

using namespace std;
string city[30] = {"Addis Ababa."};

int main() {
 
// char country[30] = "Ethiopia, ";
// strncpy(city, country, 4); 
cout<<city[1];// display 
// cout<<country;
   

    return 0;
}

 