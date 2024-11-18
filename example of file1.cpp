#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student {
    int roll;
    char name[25];
    float marks;
    char grade;

    void getData() {
        cout << "Student Info:\n";
        cout << "Rollno: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;
        if (marks >= 75) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    void putData() const {
        cout << "Rollno: " << roll << "\tName: " << name << "\n";
        cout << "Marks: " << marks << "\tGrade: " << grade << "\n";
    }

    void modify() {
        cout << "Rollno: " << roll << "\n";
        cout << "Name: " << name;
        cout << "\tMarks: " << marks << "\n";
        cout << "Enter new details.\n";
        char newName[25];
        float newMarks;
        cout << "New name (Enter '.' to retain the old name): ";
        cin >> newName;
        cout << "New marks (Enter -1 to retain the old marks): ";
        cin >> newMarks;

        if (strcmp(newName, ".") != 0) {
            strcpy(name, newName);
        }
        if (newMarks != -1) {
            marks = newMarks;
            if (marks >= 75) {
                grade = 'A';
            } else if (marks >= 60) {
                grade = 'B';
            } else if (marks >= 50) {
                grade = 'C';
            } else if (marks >= 40) {
                grade = 'D';
            } else {
                grade = 'F';
            }
        }
    }
};

int main() {
    fstream fio("marks.dat", ios::in | ios::out | ios::binary | ios::app);
    if (!fio) {
        cerr << "File could not be opened" << endl;
        return 1;
    }

    char ans = 'y';
    while (ans == 'y' || ans == 'Y') {
        Student stud1;
        stud1.getData();
        fio.write(reinterpret_cast<char*>(&stud1), sizeof(stud1));
        cout << "Record added to the file\n";
        cout << "\nWant to enter more? (y/n): ";
        cin >> ans;
    }

    fio.clear(); // clear the EOF flag
    fio.seekg(0, ios::beg);

    // Search and modify a record in the file
    int rno;
    std::streampos pos;
    bool found = false;
    cout << "Enter roll number of the student whose record is to be modified: ";
    cin >> rno;

    int size = sizeof(Student);
    Student stud1;
    while (fio.read(reinterpret_cast<char*>(&stud1), size)) {
        pos = fio.tellg() - static_cast<streamoff>(size);
        if (stud1.roll == rno) {
            fio.clear(); // clear any error flags
            fio.seekp(pos);
            stud1.modify();
            fio.write(reinterpret_cast<char*>(&stud1), size);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "\nRecord not found in the file..!!\n";
        return 2;
    }

    fio.clear(); // clear the EOF flag
    fio.seekg(0, ios::beg);

    cout << "Now the file contains:\n";
    Student stud;
    while (fio.read(reinterpret_cast<char*>(&stud), size)) {
        stud.putData();
    }

    fio.close();
    return 0;
}
