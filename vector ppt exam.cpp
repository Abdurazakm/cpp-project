#include <iostream>
#include <fstream>
#include <cstring>
#include<vector>
using namespace std;
 int main(){
 //vector declaration and initailization
 vector<int> nums = {45, 85, 96, 23, 25};  
//print the size of the vector and capacity 
cout<<"Initial Size of Vector: "<<nums.size()<<endl;
cout<<"Capacity of Vector: "<<nums.capacity()<<endl;
 //print vector elements using iterators 
cout << "\nOutput from begin and end: ";
 vector <int>:: iterator a;
 for (a = nums.begin(); a != nums.end(); ++a)
 cout << *a << " ";
 cout << "\nOutput from cbegin and cend: ";
 for (auto a = nums.cbegin(); a != nums.cend(); ++a)
 cout << *a << " ";
 //remove element from the end of the vector 
nums.pop_back();
 cout<<"\nSize of Vector: "<<nums.size()<<endl;
 cout << "\nVector contents After deletion: ";
 for (int a = 0; a < nums.size(); a++)
 cout << nums[a] << " ";
 //erase the entire vector elements
 nums.clear();    
cout << "\nSize after clear(): " << nums.size();
 // checks if the vector is empty or not 
if (nums.empty() == false) 
cout << "\nVector is not empty"; 
else
 cout << "\nVector is empty";
 vector<int> items;
 //print the size of the vector and capacity after insertion 
cout<<"\n\n Second Vecor:\n";
 cout<<"Size of Vector: "<<items.size()<<endl;
 cout<<"Capacity of Vector: "<<items.capacity()<<endl;
 //Pushing the values one-by-one in vector using push_back():
 for (int a = 1; a <= 5; a++)
 items.push_back(a);
  //Printing the output of vector ‘a’ using iterators rbegin() and rend()
 cout << "\nOutput of rbegin and rend Function: "; 
for (auto ir = items.rbegin(); ir != items.rend(); ++ir) 
cout << *ir << " "; 
//insert valeu at specified position of vector 
items.insert(items.begin(), 7); 
items.insert(items.begin()+2, 9); 
items.insert(items.end()-1, 15); 
//Printing the output of vector ‘a’ using iterators crbegin() and crend()
 cout << "\nOutput of crbegin and crend Function: "; 
for (auto ir = items.cbegin(); ir != items.cend(); ++ir) 
cout << *ir << " "; 
 // resizing  the vector ‘a’ to  size  4 
items.resize(4); 
//Size and capacity of vector after resizing 
cout<<"\nSize of Vector: "<<items.size()<<endl;
 cout<<"Capacity of Vector: "<<items.capacity()<<endl;
 cout << "\nOutput of After resizing : "; 
for (auto ir = items.cbegin(); ir != items.cend(); ++ir) 
cout << *ir << " "; 
return 0;
 }






























/*push_back() and pop_back()
            adds a new element at the end and removes a last element from the
             vector respectively
 empty()    determines whether the vector is empty or not.
 insert()   inserts new element at the specified position.
 resize()   modifies the size of the vector.
 clear()    removes all the elements from the vector.
 size() and capacity()   determines a number of elements in the vector and the current capacity
                        of the vector respectively
 end()    refers to the past-last-element in the vector.
 begin()    points the first element of the vector.
 max_size()  determines the maximum size that vector can hold.
 cend() and cbegin()     refers to the past-last and the firs element in the vector respectively
 crbegin() and crend()   It refers to the last character of the vector and element preceding the
                          first element of the vector respectivel*/