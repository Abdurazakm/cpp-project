#include <iostream>
using namespace std;
int main()
{
    int num, n = 0,k=1;
    cout << "enter the number: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= num - n; j++)
        {
            cout << j << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n-1; j++)
        {
            cout << "  ";
        }
        for (int j = num - n; j >= 0; j--)
        {
             if (j != num)
            cout << j << " ";
        }
        cout << "\n";
        n++;
    }
    for ( int i = 0; i <=num; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<j<<" ";
        }
        for ( int j = 0;  j < num-i; j++)
        {
           cout<<"  ";
        }
        for (int j = 0; j < num-k; j++)
        {
            cout<<"  ";
        }
        for ( int j = i; j >=0; j--)
        {
            if (j!=num)
            {
                cout<<j<<" ";
            }
            // if(num>=10&&j<10)
            // cout<<" ";
            
        }
        cout<<"\n";
        k++;


        
        
        
        
    }
    
    return 0;
}