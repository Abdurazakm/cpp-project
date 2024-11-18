#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   // fstream file;
    int mid, project,finally, total;
    fstream file("exam.txt", ios::out);
    if (file.is_open())
    {
        cout << "the file has been opened successfully for output\n";
        cout << "enter the values: ";
        cin >> mid >> project >> finally;
        file<<"this is the your result 1st semister of fundamental computer programming:\n";
        file<<"mid\tproject\tfinally\n";
        file << mid << '\t' << project << '\t' << finally<<endl;


    }
    file.close();
    // file.open("cpp.txt", ios::in);
    // int x, y, z;
    // if (file.is_open())
    // {
    //     cout << "the file has been opened successfully for input\n";
    //     file >> x >> y >> z;
    //     total = x + y + z;
    //     cout << "the values fetched from the file are: " << x << '\t' << y << '\t' << z;
    //     cout << "\nthe sum of the three values is: " << total;
    // }
    // file.close();
    // file.open("cpp.txt", ios::app);
    // if (file.is_open())
    // {
    //     cout << "the file has been opened successfully for out\n";
    //     file << '\t' << total;
    //     file.close();
    // }
    return 0;
}