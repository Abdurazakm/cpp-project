#include <iostream>
using namespace std;

int main()
{
  //   int i = 5, j = 10;
  //  int *ptr=&i,**pptr;
  // ptr = &i, pptr = &ptr;
  //  cout<<"\n&i = "<<&i<<"\nptr = "<<ptr<<endl;
  //  cout<<"\n*ptr = "<<*ptr;
  // *ptr++;
  //  cout<<"\n&i = "<<&i<<"\nptr = "<<ptr<<endl;

  //  cout<<"ptr = "<<ptr;
  //  cout<<"\n*(ptr++) "<<*(ptr++)<<"\nptr "<<ptr<<endl;
  //  cout<<"\n*ptr "<<*ptr;
  // cout<<"*++pt = "<<*++ptr<<"\n "<<*ptr<<endl;
  // cout<<*(++ptr)<<" "<<ptr<<endl;
  // cout<<++*ptr<<" "<<ptr<<endl;
  // cout<<++(*ptr)<<" "<<ptr<<endl;
  // cout<<(*ptr)++<<" "<<ptr<<endl;
  // cout<<"ptr = "<<ptr<<"\n*ptr = "<<*ptr;
  /*int V;
   int *Ptr1, *ptr2 = &V;
   int Arr1[5];
   Ptr1 = &(Arr1[2]);
   cout<<"V "<<V<<"&v "<<&V<<"\nptr2 "<<ptr2<<"\n&ptr2 "<<*ptr2<<endl;
   cout<<Arr1<<“  “<<&Arr1<<“\n”<<ptr1<<“  “<<&ptr1<<endl;
   char *Ptr3 = &V;
   double Arr2[5];    Ptr1 = &(Arr2);
   cout<<V<<“  “<<&V<<“\n”<<ptr2<<“  “<<&ptr2<<endl;
   cout<<Arr1<<“  “<<&Arr1<<“\n”<<ptr1<<“  “<<&ptr1<<endl;*/

  /*int value1 = 5, value2 = 15;
  int *p1, *p2;
  p1 = &value1;



   p2 = &value2;
  *p1 = 10;
  *p2 = *p1;
  p1 = p2;
  *p1 = 20;
  // p2 = address of value2
   // value pointed to by p1=10
   // value pointed to by p2= value pointed to by p1
   // p1 = p2 (pointer value copied)
   // value pointed to by p1 = 20
   cout << "value1==" << value1 << "/ value2==" << value2;
  cout <<"\np1 "<< sizeof(p1) <<"\n*p1 "<< sizeof(*p1)<<"\n&p1 "<< sizeof(&p1) << endl;*/
  /*int k = 4, *ptr=&k, **ptoptr=&ptr;

   cout << "K = " << k << endl;
   * ptr = k+10;
   cout << "x = " << k << endl;
   **ptoptr = *ptr + k;
   cout << "k = " << k << endl;*/
  int a;
  cout << "enter the odd number between 1 and 12 ";
  cin >> a;
  if (a == 1)
    cout << "january";
  else if (a == 3)
    cout << "march";
  else if (a ==5)
    cout << "may";
  else if (a == 7)
    cout << "july";
  else if (a == 9)
    cout << "sempteber";
  else if (a == 11)
    cout << "noveber";
  else
    cout << "wrong number";
  return 0;
}
