// // #include<iostream>
// // using namespace std;
// // struct sample{
// //     int x;
// // };
// // int main(){
// //     sample s;
// //     s.x=50;
// //     int i,j;
// //     int c=0;
// //     for(i=25;i<=s.x;i++){
// //         for (j=1;j<=i;j++){
// //             if(i%j==0)
// //             c++;
// //         }
// //         if(c==2)
// //         cout<<i<<",";
// //         c=0;

// //     }
// //     return 0;
// // }

//  #include <iostream>
//  #include<string.h>
//  using namespace std;
//  enum colors {  green=1, red, blue, black=0, white,  
// brown=11, pink, yellow, aqua, gray
//  }flag_color;
//   void functi1(){
//     char str[100]="programming",temp;
//     int i,j=0;
//     j=strlen(str)-1;
//     while(i<j){
//         temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         cout<<"string="<<str[i]<<endl;
//         i++,j--;
//         //cout<<"string="<<str[i]<<endl;
        
//     }
//   //cout<<"string="<<str<<endl;
    
//  }
//  int main()
//  {
// functi1();
//    //definition at the time declaration 

// colors painting; 
// painting = brown;
// flag_color = green;
// cout<<"Painting Colors: "<<endl;
//  for(int i=painting; i<= 15; ++i ) { 
// cout<<painting+i<<"  ";  
// } 
//  return 0;
//  }

//  #include<iostream>
//  using namespace std;
// struct check{
 
//   int val;
  
//   int getval(){
//     return val;
//   }

//  };
//  int maina(){
//   check c;
//   c.val=2;
//   cout<<c.getval();
//   return 0;
//  }




// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// struct Employee {
//     int number;
//     string name;
//     float rate;
//     int hours;
//     float grossPay;
//     float netPay;
// };

// template <typename T>
// void readData(T* employees, int size) {
//     for (int i = 0; i < size; ++i) {
//         cout << "Enter number: ";
//         cin >> employees[i].number;
//         cout << "Enter name: ";
//         cin >> employees[i].name;
//         cout << "Enter rate: ";
//         cin >> employees[i].rate;
//         cout << "Enter hours: ";
//         cin >> employees[i].hours;
//     }
// }

// template <typename T>
// void calculateAndPrint(T* employees, int size) {
//     ofstream outFile("payroll_report.txt");
//     for (int i = 0; i < size; ++i) {
//         employees[i].grossPay = employees[i].rate * employees[i].hours * 80;
//         float tax = employees[i].grossPay * 0.15;
//         float pension = employees[i].grossPay * 0.07;
//         employees[i].netPay = employees[i].grossPay - tax - pension;

//         outFile << "Number: " << employees[i].number << ", Name: " << employees[i].name
//                 << ", Gross Pay: " << employees[i].grossPay << ", Net Pay: " << employees[i].netPay << endl;
//     }
//     outFile.close();
// }

// int main() {
//     const int SIZE = 3;
//     Employee employees[SIZE];

//     readData(employees, SIZE);
//     calculateAndPrint(employees, SIZE);

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    // Part a: Adding a new record to the file
    ofstream outfile("student.dat", ios::binary | ios::app);
    if (outfile.is_open()) {
        const char* new_record = "258 Alemu Bekele 3.88 3\n";
        outfile.write(new_record, strlen(new_record));
        outfile.close();
    } else {
        std::cerr << "Failed to open the file." << endl;
       // return 1;
    }
   // return 0;
//}
outfile.close();

//     // Part b: Repositioning the read pointer and displaying the character
   ifstream infile("student.dat", ios::binary | ios::ate);
    if (infile.is_open()) {
        streamsize size = infile.tellg();
        infile.seekg(size-streamsize(strlen("258 Alemu Bekele 3.88 3\n") / 2));
        char ch;
        infile.get(ch);
       cout << "The character in the middle of the last line: " << ch << endl;
        infile.close();
    } else {
       cerr << "Failed to open the file." << endl;
       // return 1;
    }
    outfile.close();
    return 0;
}

//     // Part c: Displaying all contents of the file
//     infile.open("student.dat", std::ios::binary);
//     if (infile.is_open()) {
//         std::cout << "File contents:" << std::endl;
//         std::cout << infile.rdbuf(); // Prints the entire file contents
//         infile.close();
//     } else {
//         std::cerr << "Failed to open the file." << std::endl;
//         return 1;
//     }

//     return 0;
// }


//  #include <iostream>
//  using namespace std;
//  template<class T>
//  class Adder {
//  public:
//  T num1, num2;
//  Adder (T x, T y) { 
// num1 = x; 
// num2 = y;
//  }
//  void add() {
//  cout << "Sum of the numbers: ";
//  cout<< num1+num2<<endl;
//  }
//  };
//   int main() {
//     Adder A;
//  A<int> d (4, 5);
//  d.add();
//  A<int> d (14.5, 65.75);
//  d.add();
//  return 0;
//   }
