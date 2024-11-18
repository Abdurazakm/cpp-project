#include <iostream>
using namespace std;
// function declaration
void readarray(int arr[], int size);
void printarray(int arr[5], int size);
double getaverage(int arr[5]);

int main()
{

    int balance[5];

    // calling function with arrayh as an argument
    readarray(balance, 5);
    printarray(balance, 5);
    double avg = getaverage(balance);
    // output the returned value, average
    cout << "\n\naverage value is: " << avg << endl;
}
// function definition
void readarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }
}
void printarray(int arr[5], int size)
{
    cout << "\nThe array element are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
double getaverage(int arr[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return (double(sum / 5));
}