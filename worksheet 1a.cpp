/*
1.Writeaprogramthatacceptsanintegerfromtheuserinthemainfunction,passestheintegerto
 anotherfunctionand
 a.Countsthenumberofdigitsinanintegernumber(E.g.23,498hasfivedigits)
 b.Printsthereversesthenumber(E.g.input=4637215Output=5217364)
 c.Printsthefirstandthelastdigitoftheenteredinteger.
 d.Findsthesumoffirstandlastdigitofanumber
 e.Swapsthefirstandthelastdigitsofanumber
 f.Computethesumofdigitsofanumber
 g.Computetheproductofdigitsofanumber
 h.Checkwhetheranumberispalindromeornot.
 i.Findfrequencyofeachdigitinagiveninteger.
 j.Sortthedigitsofagi*/
// #include<iostream>
// #include <cstring>
// #include<cmath>
// using namespace std;

// int numofdigit(int y){
//     int i=1,digit;
// lebel:
// y=y/10;
// if(y!=0){
// i++;
// goto lebel;
// }
// return i;
// }
// int reverse(int y,int n_dig){
//     int rem,sum =0;
//     for(int j=0;j<n_dig;j++){
//         rem=y%10;
//         y=y/10;
//         sum=sum+(rem*pow(10,n_dig-1-j));
        
        
//     }
//     return sum;
// }

// int main(){
// int x,n_dig,n_rev;
// cout<<"enter the number: ";
// cin>>x;
// n_dig=numofdigit(x);
// cout<<n_dig<<endl;
// n_rev=reverse(x,n_dig);
// cout<<n_rev;

// return 0;

// }
#include <iostream>

// Structure to store student information
struct Student {
    int projectScores[3];
    int testScores[2];
};

// Function to calculate total points earned
int calculateTotalPoints(const Student& student) {
    int total = 0;
    for (int i = 0; i < 3; ++i) {
        total += student.projectScores[i];
    }
    for (int i = 0; i < 2; ++i) {
        total += student.testScores[i];
    }
    return total;
}

// Function to determine grade based on total points earned
char determineGrade(int totalPoints) {
    if (totalPoints >= 315)
        return 'A';
    else if (totalPoints >= 280)
        return 'B';
    else if (totalPoints >= 245)
        return 'C';
    else if (totalPoints >= 210)
        return 'D';
    else
        return 'F';
}

int main() {
    Student student;

    // Input project scores
    std::cout << "Enter project scores (out of 50) for 3 projects:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "Project " << i + 1 << ": ";
        std::cin >> student.projectScores[i];
    }

    // Input test scores
    std::cout << "Enter test scores (out of 100) for 2 tests:\n";
    for (int i = 0; i < 2; ++i) {
        std::cout << "Test " << i + 1 << ": ";
        std::cin >> student.testScores[i];
    }

    // Calculate total points
    int totalPoints = calculateTotalPoints(student);

    // Determine grade
    char grade = determineGrade(totalPoints);

    // Display total points and grade
    std::cout << "Total points earned: " << totalPoints << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
