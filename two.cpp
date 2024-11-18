#include<iostream>
#include<string>
using namespace std;

int main() {
    int numstudents;
    int numcourse;
    string namestudent[100];
    cout << "How many students do you want to calculate GPA for: ";
    cin >> numstudents;
    int i, j, sum, totalcr_hr, k;
    float point, GPA[100][100], CGPA[100],sumgpa;//sum_of_all_sem,sum_of_all_sem_cr_hr;
    int numsem;
    float mark[100];
    char GRADE[100][100][100], grade;
    int cr_hr[100];

    for (i = 0; i < numstudents; i++)
    {
        sum = 0;
        totalcr_hr = 0;
       // sum_of_all_sem_cr_hr=0;
       // sum_of_all_sem=0;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> namestudent[i];
        cout << "Enter the number of semesters for student " << namestudent[i] << ": ";
        cin >> numsem;
        sumgpa=0;

        for (j = 0; j < numsem; j++)
        {
            cout << "Enter the number of courses for semester " << j + 1 << ": ";
            cin >> numcourse;

            for (k = 0; k < numcourse; k++)
            {
                cout << "Enter the mark out of 100% for course " << k + 1 << ": ";
                cin >> mark[k];
                cout << "Enter the credit hour for course " << k + 1 << ": ";
                cin >> cr_hr[k];

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

                sum = sum + point * cr_hr[k];
                totalcr_hr = totalcr_hr + cr_hr[k];
                GRADE[i][j][k] = grade;
            }

            GPA[i][j] = sum / totalcr_hr;
             sumgpa=sumgpa+GPA[i][j];

        }

        CGPA[i] =sumgpa/ numsem; // Assuming CGPA is the GPA of the last semester
    }

    int x, y;
    cout << "Name\t\t";
    for (x = 0; x < numsem; x++)
    {
        for (y = 0; y < numcourse; y++)
        {
            cout << "Sem " << x + 1;
            cout << "_Cour " << y + 1 << "\t";
        }
        cout << "GPA of sem "<<x+1<<"\t";
    }
    cout << "CGPA\t"; // Display CGPA column
    cout << "\n";

    int a, b, c;
    for (a = 0; a < numstudents; a++)
    {
        cout << namestudent[a] <<"\t";
        for (b = 0; b < numsem; b++)
        {
            for (c = 0; c < numcourse; c++)
            {
                cout<<GRADE[a][b][c]<<"\t\t";
            }
            cout << GPA[a][b]<<"\t\t";
        }
        cout << CGPA[a]; // Display CGPA
        cout << "\n";
    }

    return 0;
}
