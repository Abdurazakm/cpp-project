#include <iostream>
using namespace std;
int main()
{
    // 1Q display the following 2 4 6....n by using while loop
    //  int n,i=2;

    // cout<<"enter the number: ";
    // cin>>n;
    // while (i<=n)
    // {
    //     cout<<i<<" ";
    //     i=i+2;
    // }

    // 2Q find the factorial of the n

    //  int n,i,facto=1;
    //  cout<<"enter the number: ";
    //  cin>>n;
    //  for (int i = 1; i<=n; i++)
    //  { facto*=i;

    //  }
    //  cout<<facto;

    // 3Q entert n (n specified the number of time the user would like to perform a task)
    int x, y, z, n, choice, i = 1, a;
    cout << "\n\n--------------\n\n";
    cout << "how many times do u want to perform the task: ";
    cin >> n;

    do
    {
        cout << "what would younlike to do?\n";
        cout << "if you want to know ehich number is largest among the three number press 1\n";
        cout << "if you want to know the number is even or odd press 2\n";
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter the first number: ";
            cin >> x;
            cout << "enter the second number: ";
            cin >> y;
            cout << "enter the thrid number: ";
            cin >> z;
            if (x > y && x > z)
                cout << x << " is largest number\n";
            else if (y > x && y > z)
                cout << y << " is largest number\n";
            else if (z > x && z > y)
                cout << z << " is largest number\n";
            else
                cout << "the numbers are equal\n";

            break;

        case 2:
            cout << "enter the number you want to check even or odd: ";
            cin >> x;
            if (x % 2 == 0)
                cout << "\nthe number is even";
            else
                cout << "\nthe number is odd";
            break;
        }
       
        i++;
    } while (i <= n);
   

    // 4Q        $
    //      $$
    //     &&& ,
    //    &&&&
    //   &&&&&
    //    by using nested loop
    // int n,j,k,i;
    // cout<<"enter the number: ";
    // cin>>n;

    //     for(int i=1; i<=n; ++i){
    //         cout<<"\n";
    //         for(int j=n;j>=i;j--)
    //         cout<<" ";
    //         for(int k=1;k<=i;k++)
    //         cout<<"$";

    //     }

    return 0;
}