#include <iostream>
using namespace std;
int sortedelements(int arr[], int size);
int main()
{
  int arr[50],n;
  cout<<"the sorted element are:\n";
  sortedelements(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
int sortedelements(int *arr, int size)
{
 
  cout << "how many element ";
  cin >> size;
  cout << " enter the the number you want to ascending: \n";
  for (int i = 0; i < size; i++)
  {
    cout << "enter the " << i + 1 << ": ";
    cin >> arr[i];
  }
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < (arr[i]))
      {
        int temp = (arr[i]);
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr[size];
}
