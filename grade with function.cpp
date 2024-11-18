#include <iostream>
#include <string>
using namespace std;

void readgrade(float mark[], string &name, int &num_of_course, string grade[], float point[])
{

    cout << "what is your name ";
    cin >> name;
    cout << "hi " << name << " how many course do you take ";
    cin >> num_of_course;
    for (int i = 0; i < num_of_course; i++)
    {
        cout << "enter mark of course " << i + 1 << ": ";
        cin >> mark[i];
        if (mark[i] >= 90 && mark[i] < 100)
        {
            grade[i] = "A+";
            point[i] = 4;
        }
        else if (mark[i] >= 85 && mark[i] < 90)
        {
            grade[i] = "A";
            point[i] = 4;
        }
        else if (mark[i] >= 80 && mark[i] < 85)
        {
            grade[i] = "A-";
            point[i] = 3.75;
        }
        else if (mark[i] >= 75 && mark[i] < 80)
        {
            grade[i] = "B+";
            point[i] = 3.5;
        }
        else if (mark[i] >= 70 && mark[i] < 75)
        {
            grade[i] = "B";
            point[i] = 3;
        }
        else if (mark[i] >= 65 && mark[i] < 70)
        {
            grade[i] = "B-";
            point[i] = 2.75;
        }
        else if (mark[i] >= 60 && mark[i] < 65)
        {
            grade[i] = "C+";
            point[i] = 2.5;
        }
        else if (mark[i] >= 50 && mark[i] < 60)
        {
            grade[i] = "C";
            point[i] = 2;
        }
        else if (mark[i] >= 45 && mark[i] < 50)
        {
            grade[i] = "C-";
            point[i] = 1.75;
        }
        else if (mark[i] >= 40 && mark[i] < 45)
        {
            grade[i] = "D";
            point[i] = 1;
        }
        else if (mark[i] >= 0 && mark[i] < 40)
        {
            grade[i] = "F";
            point[i] = 0;
        }
        else
            cout << "invalid input";
    }
}
float Gpa(float point[], int num_of_course)
{
    float sum = 0;
    for (int i = 0; i < num_of_course; i++)
    {
        sum += point[i];
    }
    float gpa = sum / num_of_course;
    return gpa;
}

int main()
{
    float mark[20], point[20], GPA;
    string name, grade[20];
    int num_of_course;
    char choice;

    do
    {
        readgrade(mark, name, num_of_course, grade, point);
        cout << name << " here is your grade for the marks you entered" << endl;
        cout << "mark\tgrade" << endl;
        for (int i = 0; i < num_of_course; i++)
        {
            cout << mark[i] << "\t" << grade[i] << endl;
        }
        cout << "Would you like to know your GPA? \nPlease press y for yes or n for no: ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            GPA = Gpa(point, num_of_course);
            cout << "Your GPA is " << GPA << endl;
        }
        cout << "Would you like to enter grades for another student? \nPlease press y for yes or n for no: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting program. Goodbye!";
    return 0;
}
