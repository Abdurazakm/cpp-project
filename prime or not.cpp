#include <iostream>
#include <cmath>

int main() {
    int number;

    // Ask the user to enter a number
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the entered number is less than 2
    if (number < 2) {
        std::cout << "The number " << number << " is not prime." << std::endl;
        return 0;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            // If the number is divisible, it's not prime
            std::cout << "The number " << number << " is not prime." << std::endl;
            return 0;
        }
    }

    // If no divisors were found, the number is prime
    std::cout << "The number " << number << " is prime." << std::endl;

    return 0;
    }
    /*#include<iostream>
    using namespace std;
    bool isprime(int n);
    int main(){


        return 0;
    }
    bool isprime(int n);
    
    {if (n<=1)return false;
    for(int i=2; i<=(n/2);i++){
        if(n%i==0)return false;
    } return true;
   */




    }

