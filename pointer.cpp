// #include <iostream>
// using namespace std;

// int main() {
//     float num1 , num2;
//     float *ptr = &num1, *pptr = &num2;
//    float sum,dif,mult,div;
//    cout<<"enter the first number: ";
//    cin>>num1;
//    cout<<"enter the second number: ";
//    cin>>num2;


//     sum=(*ptr)+(*pptr);
//     dif=(*ptr)-(*pptr);
//     mult=(*ptr)*(*pptr);
//     div=(*ptr)/(*pptr);
//   //  cout<<"\nsum = "<<sum<<"\ndif = "<<dif<<"\nmult = "<<mult<<"\ndiv = "<<div;
//   again:
//     cout<<"what you want to do \n";
//     cout<<"1 addition\n";
//     cout<<"2 substraction\n";
//     cout<<"3 multiplication\n";
//     cout<<"4 division\n";
//     cout<<"enter your choose: ";
//     int choose;
//     cin>>choose;
//     switch (choose)
//     {
//     case 1:
//        cout<<"sum = "<<sum;
//         break;
//         goto again;
//         case 2:
//        cout<<"dif = "<<dif;
//         break;
//         case 3:
//         cout<<"mult = "<<mult;
//         break;
//         case 4:
//        cout<<"div = "<<div;
//         break;
    
    
//     default:
//     goto again;
//         break;
//     }
#include <iostream>
using namespace std;

int main() {
    int n, i, num[100], j, k, x, *ptr;

    cout << "how many elements do you want in your list: ";
    cin >> n;

    cout << "enter the elements in ascending order\n";
    for (i = 0; i < n; i++) 
    {
        cout << "enter the num " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "enter the element you want to insert: ";
    cin >> x;

    ptr = num + n;

    for (j = 0; j < n; j++) {
        if (num[j] > x) {
            for (k = n; k > j; k--) {
                *(ptr + 1) = num[k - 1];
            }
            num[j] = x;
            break;
        }
    }

    cout << "Array after insertion: ";
    for (i = 0; i <= n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

