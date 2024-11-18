#include <iostream>

int main() {
    /*
    //about *ptr++/*(ptr++)
    int numbers[] = {1, 2, 3, 4, 5};
    
    // Create a pointer pointing to the first element of the array
    int* ptr = numbers;

    // Access the value at the current memory location and then increment the pointer
    std::cout<<"ptr = "<<ptr;
    int value1 = *ptr++;
    std::cout << "\nValue 1: " << value1 <<"   ptr = "<<ptr<< std::endl;

    // Now, ptr points to the next element in the array
    // Access the value at the updated memory location
    int value2 = *ptr;
    std::cout << "\nValue 2: " << value2 <<"   ptr = "<<ptr<< std::endl;
   */
/*
    //about *++ptr/*(++ptr)
    
    int numbers[] = {1, 2, 3, 4, 5};

    // Create a pointer pointing to the first element of the array
    int* ptr = numbers;
    std::cout<<"ptr = "<<ptr;

    // Increment the pointer and then access the value at the updated memory location
    int value = *++ptr;

    std::cout << "\nValue: " << value <<"   ptr = "<<ptr<< std::endl;
 */
/*
//about ++*ptr


    int number = 5;

    // Create a pointer pointing to the variable 'number'
    int* ptr = &number;

    // Increment the value at the memory location pointed to by ptr
    ++*ptr;

    std::cout << "Updated value: " << *ptr << std::endl;
*/
//about this (*ptr)++

    int number = 5;

    // Create a pointer pointing to the variable 'number'
    int* ptr = &number;

    // Use the current value at the memory location pointed to by ptr and then increment it
    int result = (*ptr)++;

    std::cout << "Result: " << result << std::endl;
    std::cout << "Updated value: " << *ptr << std::endl;

    return 0;
}


   
  

