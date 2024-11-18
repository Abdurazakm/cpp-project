#include <iostream>  
using namespace std;  
int main ()  
{  
  //implicity type casting
    short x = 300;  
    int y;  
    y = x;  
    cout << " Implicit Type Casting " << endl;  
    
    cout << " The value of y: " << y << endl;  
      cout << " The value of x: " << x << endl;  
    int num = 30;  
    char ch = 'a';  
    int res = 30 + 'b';  
 float val = num + 'B';  
    cout << " Type casting from int data to float type: " << val << endl;
    cout << " Type casting char to int data type ('b' to 30): " << res << endl;  
      
      
    return 0;                                                                                     
}