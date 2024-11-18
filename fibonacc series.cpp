 /*Write a function based C++ program that find the Fibonacci series of a given
 number. Define a function named fibonacci that has one argument with default
 argument and returns integer. The function is called both with parameter and
 without parameter.*/
//  #include<iostream>
//  using namespace std;
//  float *findMax(float A[], int N) {
//  float *theMax = &(A[0]);
//  for (int i = 1; i < N; i++){
//  if (A[i] > *theMax) 
// theMax = &(A[i]);
//  }
//  return theMax;
//  }
//  int main() {
//  float A[5] = {0.0, 3.0, 1.5, 2.0, 4.1};
//  float *maxA;
//  maxA = findMax(A,5);
//  cout<<"The Max is: "<<*maxA<<endl;
//  return 0;
//  }
// #include<iostream>
// using namespace std;
// int fobinaccseries(int n);
// int main(){
//     int num,fibonaccnum;
//     cout<<"enter the number you want to know fibonacc series: ";
//     cin>>num;
//     fibonaccnum=fobinaccseries(num);
//     cout<<"the fibonacc series of "<<num<<" is "<<fibonaccnum;
//     return 0;

// }
// int fobinaccseries(int n){
//     int fibo[n];
//     cout<<"the list of fibonacc series is: "<<endl;
//     fibo[0]=0;
//     fibo[1]=1;
//     for (int i = 2; i < n; i++)
//     {
//         fibo[i]=fibo[i-1]+fibo[i-2];
      
//     }
//     for (int i = 0; i < n; i++)
//     {
//           cout<<fibo[i]<<" ";
//     }
    
//     cout<<endl;
//     return fibo[n-1];
    

// }



// #include <iostream>
// using namespace std;

// // Function to find the Fibonacci series
// int fibonacci(int n = 10) {
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     cout << "Fibonacci series of " << n << " numbers:\n";
//     for (int i = 0; i < n; i++) {
//         cout << fib[i] << " ";
//     }
//     cout << endl;

//     return fib[n - 1];
// }

// int main() {
//     // Calling fibonacci funsizection without parameter (default is 10)
//     int result1 = fibonacci();
//     cout << "Last number in default Fibonacci series: " << result1 << endl;

//     // Calling fibonacci function with a parameter
//     int number;
//     cout << "Enter the number of Fibonacci series elements to generate: ";
//     cin >> number;
//     int result2 = fibonacci(number);
//     cout << "Last number in Fibonacci series: " << result2 << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Function to arrange numbers in ascending order
int arrangeAscending()

    // int arr[size];

    // cout << "Enter " << size << " numbers:\n";
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // // Call the function to arrange numbers in ascending order
    // //arrangeAscending(arr, size);

    // cout << "Numbers in ascending order:\n";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if(arr[j]<(arr[i])){
//                 int temp=(arr[i]);
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }

//         }
//     }
// }

int main() {
    int size;
    cout <<"hello"<<endl;
     arrangeAscending();
     //size=arrangeAscending()<<endl;

    //cout<<arrangeAscending()<<endl;




    return 0;
}
int arrangeAscending(){
    cout << "Enter the size of the array: ";
    cin >> size;
    return size;
    }

