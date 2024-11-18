#include <iostream>
#include <string>
#include <iomanip>
#define size 100
using namespace std;
int main()
{
   int numofstudents, numofcourse[size], i, j, k, w, x, y, z, a, b;
   float mark, point, sum, GPA[size][size], sumofgpa, CGPA[size], numofsem;
   char GRADE[size][size][size], grade;
   string nameofstudent[size];
   cout << "How many students? ";
   cin >> numofstudents;
   cout << "How many semester? ";
   cin >> numofsem;
   for (j = 0; j < numofsem; j++)
   {
      cout << "How many course for semester " << j + 1 << ": ";
      cin >> numofcourse[j];
   }
   for (i = 0; i < numofstudents; i++)
   {
      cout << "\nenter mark out of 100%' for.......... \nstudent " << i + 1 << " \n";
      sumofgpa = 0;
      for (k = 0; k < numofsem; k++)
      {
         sum = 0;
         // sumofgpa=0;
         for (w = 0; w < numofcourse[k]; w++)
         {
            cout << "sem " << k + 1 << "_course " << w + 1 << ": ";
            cin >> mark;
            if (mark >= 85 && mark < 100)
            {
               grade = 'A';
               point = 4;
            }
            else if (mark >= 70 && mark < 75)
            {
               grade = 'B';
               point = 3;
            }
            else if (mark >= 50 && mark < 60)
            {
               grade = 'C';
               point = 2;
            }
            else if (mark < 50 && mark >= 0)
            {
               grade = 'F';
               point = 0;
            }
            sum = sum + point;
            GRADE[i][k][w] = grade;
         }

         GPA[i][k] = sum / numofcourse[k];
         sumofgpa = sumofgpa + GPA[i][k];
      }

      CGPA[i] = sumofgpa / numofsem;
      cout << "\nenter the name of student " << i + 1 << ": ";
      cin >> nameofstudent[i];
   }
   cout << "\n----------------------------------------------------------------------------------------------------------------------\n";
   // cout<<"|_____________________________________________________________________________________________________________________|\n";
   cout << setw(16) << left << "| Name of student";
   for (x = 0; x < numofsem; x++)
   {
      for (y = 0; y < numofcourse[x]; y++)
      {
         cout << setw(4) << left << "| sem_" << setw(1) << left << x + 1;
         cout << setw(4) << left << "cou_" << setw(2) << left << y + 1;
      }
      cout << setw(9) << left << "| GPAofsem_" << setw(2) << left << x + 1;
   }
   cout << setw(4) << left << "| CGPA |\n";
   cout << "----------------------------------------------------------------------------------------------------------------------\n";
   // cout<<"|______________________________________________________________________________________________________________________|\n";
   for (z = 0; z < numofstudents; z++)
   {
      cout << setw(2) << left << "| " << setw(15) << left << nameofstudent[z];
      for (a = 0; a < numofsem; a++)
      {
         for (b = 0; b < numofcourse[a]; b++)
         {
            cout << setw(2) << left << "| " << setw(11) << left << GRADE[z][a][b];
         }
         cout << setw(2) << left << "| " << setw(11) << left << GPA[z][a];
      }
      cout << setw(2) << left << "| " << setw(4) << left << CGPA[z] << setw(2) << left << " |"
           << "\n";
      cout << "----------------------------------------------------------------------------------------------------------------------\n";
      // cout<<"|_____________________________________________________________________________________________________________________|\n";
   }

   return 0;
}