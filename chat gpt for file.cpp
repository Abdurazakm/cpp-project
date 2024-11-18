// #include <iostream>
// #include <fstream>
// #include <string.h>
// using namespace std;

// int main() {
//     char name;

//     // Open file for writing
//     ofstream abdurazak("practice.txt", ios::out);
//     if (abdurazak.is_open()) {
//         cout << "The file is successfully opened for writing." << endl;

//         cout << "Enter your name: ";
//         cin>>name;
//         abdurazak.put(name);
//         abdurazak.close(); // Close the file after writing
//     } else {
//         cerr << "File not able to open for writing.\n";
//         exit(1);
//     }

//     // Open file for reading
//     ifstream infile("practice.txt", ios::in);
//     if (infile.is_open()) {
//         cout << "The file is successfully opened for reading." << endl;
//         infile.get(name);
//         cout << "Your name is: " << name << endl;
//         infile.close(); // Close the file after reading
//     } else {
//         cerr << "File not able to open for reading.\n";
//         exit(1);
//     }

//     return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[25];
    float marks;
} stud;

void getData() {
    cout << "Enter roll number: ";
    cin >> stud.roll;
    cin.ignore();  // Ignore newline character left in the buffer
    cout << "Enter name: ";
    cin.getline(stud.name, 25);
    cout << "Enter marks: ";
    cin >> stud.marks; // Read marks directly as float
}



void SaveData() {
    fstream outf;
    outf.open("Student.dat", ios::out | ios::binary);
    if (!outf) {
        cerr << "File could not be opened for writing.\n";
        exit(1);
    }
    char choice;
    do {
        getData();
        outf.write((char*)&stud, sizeof(stud));
        cout << "Do you want to add another record (y/n)? ";
        cin >> choice;
        cin.ignore();  // Ignore newline character left in the buffer
    } while (choice == 'y' || choice == 'Y');
    outf.close();
}

void putData() {
    cout << "\n" << stud.roll;
    cout << "\t" << stud.name;
    cout << "\t" << stud.marks;
}

void Display() {
    fstream inf;
    inf.open("Student.dat", ios::in | ios::binary);
    if (!inf) {
        cerr << "File could not be opened for reading.\n";
        exit(1);
    }
    cout << "\n\tRoll\tName\tMarks\n";
    while (inf.read((char*)&stud, sizeof(stud))) {
        putData();
    }
    inf.close();
}

void updateMarks(int rollNumber, float newMarks) {
    fstream file;
    file.open("Student.dat", ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "File could not be opened for updating.\n";
        exit(1);
    }
    
    bool found = false;
    while (file.read((char*)&stud, sizeof(stud))) {
        if (stud.roll == rollNumber) {
            found = true;
            std::streampos pos = file.tellg() - static_cast<std::streampos>(sizeof(stud));

            file.seekp(pos);
            stud.marks = newMarks;
            file.write((char*)&stud, sizeof(stud));
            cout << "Marks updated successfully.\n";
            break;
        }
    }
    
    if (!found) {
        cout << "Record not found.\n";
    }

    file.close();
}

int main() {
    SaveData();
    Display();  // Display the data after saving
    
    int rollNumber;
    float newMarks;
    
    cout << "\nEnter the roll number of the student to update marks: ";
    cin >> rollNumber;
    cout << "Enter the new marks: ";
    cin >> newMarks;
    
    updateMarks(rollNumber, newMarks);
    Display();  // Display the data after updating

    return 0;
}
