#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numofstudents, numofsem, i, j, k, numofcourse, sum, point, a, b, c, n, x, y, z, w;
    char GRADE[20][20], grade;
    string nameofstudent[20];
    float GPA[20], sumofgpa, CGPA[20], mark[100];
    cout << "How many student? ";
    cin >> numofstudents;
    cout << "How many semester? ";
    cin >> numofsem;
    for (i = 0; i < numofsem; i++)
    {
        cout << "how many courses for semester " << i + 1 << ": ";
        cin >> numofcourse;
    }
    for (n = 0; n < numofstudents; n++)
    {
        for (j = 0; j < numofsem; j++)
        {
            sum = 0;
            cout << "semester " << j + 1;
            for (k = 0; k < numofcourse; k++)
            {
                cout << " course " << k + 1 << " mark out of 100%: ";
                cin >> mark[k];
                if (mark[k] >= 85 && mark[k] < 100)
                {
                    grade = 'A';
                    point = 4;
                }
                else if (mark[k] >= 70 && mark[k] < 75)
                {
                    grade = 'B';
                    point = 3;
                }
                else if (mark[k] >= 50 && mark[k] < 60)
                {
                    grade = 'C';
                    point = 2;
                }
                else if (mark[k] < 50 && mark[k] >= 0)
                {
                    grade = 'F';
                    point = 0;
                }
                GRADE[j][k] = grade;
                sum = sum + point * 3;
            }
            GPA[j] = sum * 3 / numofcourse * 3;
            sumofgpa = sumofgpa + GPA[j];
        }
        for (z = 0; z < numofstudents; z++)
        {
            CGPA[z] = sumofgpa / numofsem;
        }

        cout << "Name of student ";
        cin >> nameofstudent[n];
    }

    cout << "Name\t";
    for (a = 0; a < numofsem; a++)
    {
        cout << "sem " << a + 1;
        for (b = 0; b < numofcourse; b++)
        {
            cout << "_course " << b + 1 << "\t";
        }
        cout << "GPA\t\t";
    }
    cout << "CGPA\t\n";
    for (w = 0; w < numofstudents; w++)
    {
        for (c = 0; c < numofstudents; c++)
        {
            cout << nameofstudent[c] << "\t";
            for (x = 0; x < numofcourse; x++)
            {
                cout << GRADE[c][x] << "\t\t";
            }
            cout << GPA[c] << "\t\t";
        }

        cout << CGPA[w] << "\n";
    }

    return 0;
}
