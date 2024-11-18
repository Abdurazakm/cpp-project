#include <iostream>
using namespace std;
const int row = 3, col = 4;
void readarray(int arr[][col]);
void writing(int arr[row][col]);
int main()
{
    int a[row][col];

    readarray(a);
    writing(a);
    return 0;
}
void readarray(int arr[][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
             cout << "enter " << i * col + j + 1 << " element: ";
            cin >> arr[i][j];
        }
    }
}
void writing(int arr[row][col]){
    int i,j;
    cout<<"arry element are:\n";
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
           cout<<arr[i][j]<<'\t';
        }
          cout << endl;
        
    }
    
}
// * 
// * *
// *   *
// *     *
// * * * * *