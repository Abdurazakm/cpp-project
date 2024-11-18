// /*#include<iostream>
// using namespace std;
// int main (){
//     int arry[100],maxcount=0,n,x, mostFrequent;
// ;
//     cout<<"how many number you would like to in your list: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"enter the element "<<i+1<<": ";
//         cin>>arry[i];

//     }
//     for(int i=0;i<n;i++){
//            x=0;
//         for(int j=0;j<n;j++){
//             if(arry[i]==arry[j])
//               x++;

//         }
//         if(x>maxcount){
//           maxcount=x;
//           mostFrequent=arry[i];
//         }






//     }

//  cout << "The most frequent element is: " << mostFrequent ;








//     return 0;
// }
// */
#include<iostream>
using namespace std;
int main(){
    int const size=100;
    string nameof_student[size];
    int numberof_sem,numberof_course,numof_student,credit_hour,point;
    char grade;
    float mark;
    cout<<"how many student ";
    cin>>numof_student;
    for(int i=0;i<numof_student;i++)
    {
      cout<<"enter the name of student "<<i+1<<": ";
      cin>>nameof_student[i];
      cout<<"enter the number of semester for student "<<i+1<<": ";
      cin>>numberof_sem;
      for(int j=0;j<numberof_sem;j++)
      {
           cout<<"enter the number of course for "<<j+1<<": ";
           cin>>numberof_course;

      
            for(int k=0;k<numberof_course;k++)
            {
                cout<<"enter mark of out of 100%; for course "<<k+1<<": ";
                cin>>mark;
                cout<<"enter credit hour for course "<<k+1<<": ";
                cin>>credit_hour;
                if (mark >= 85 && mark < 100)
                   {
                       grade = 'A';
                       point = 4;
                    }
                     else if (mark>= 70 && mark< 75)
                        {
                              grade = 'B';
                              point = 3;
                        }
                        else if (mark>= 50 && mark< 60)
                           {
                                 grade = 'C';
                                  point = 2;
                            }
                            else if (mark<50 && mark>= 0)
                               {
                                    grade = 'F';
                                    point = 0;
                                }
                                sum=sum+point*credit_hour;
                                 GRADE[i][j][k] = grade;
            }   
        }



    }








    return 0;
}
