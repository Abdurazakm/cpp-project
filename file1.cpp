#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

// Define the structure for student data
#pragma pack(push, 1) // Ensure the struct is packed
struct student {
    int ID;
    char name[20];
    float mark;
    char grade;
};
#pragma pack(pop)

// Function to get data from user and write it to file
void getdata(int num) {
    ofstream file("student.txt", ios::binary | ios::app); // Open file in binary append mode
    if (!file) {
        cerr << "File could not be opened for writing.\n";
        exit(1);
    }

    student st;
    for (int i = 0; i < num; i++) {
        cout << "Enter the ID: ";
        cin >> st.ID;
        cout << "Enter the name: ";
        cin.ignore();
        cin.getline(st.name, 20);
        cout << "Enter the mark: ";
        cin >> st.mark;

        // Determine grade based on mark
        st.grade = (st.mark >= 60) ? 'P' : 'F';

        // Write student data to file
        file.write(reinterpret_cast<char*>(&st), sizeof(student));
    }
    file.close(); // Close the file after writing
}

// Function to read and display student data from file
void displayData() {
    ifstream infile("student.txt", ios::binary | ios::in);
    if (!infile) {
        cerr << "File could not be opened for reading.\n";
        return;
    }

    student st;
    cout << setw(5) << left << "ID" << setw(20) << left << "Name" << setw(5) << left << "Mark" << setw(5) << left << "Grade" << endl;
    while (infile.read(reinterpret_cast<char*>(&st), sizeof(student))) {
        cout << setw(5) << left << st.ID << setw(20) << left << st.name << setw(5) << left << st.mark << setw(5) << left << st.grade << endl;
    }
    infile.close(); // Close the file after reading
}

// Function to update marks and grades in the file
void update() {
    int rno;
    cout << "Enter the roll number to update marks: ";
    cin >> rno; // Get the roll number to update

    fstream file("student.txt", ios::binary | ios::in | ios::out); // Open file for reading and writing
    if (!file) {
        cerr << "File could not be opened for updating.\n";
        exit(1);
    }

    student st;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&st), sizeof(student))) {
        if (st.ID == rno) { // Check if the roll number matches
            found = true;
            // Update marks and grade
            cout << "Enter the new marks: ";
            cin >> st.mark;
            st.grade = (st.mark >= 60) ? 'P' : 'F';
            
            // Move file pointer to the position of the current record
            streampos pos = file.tellg();
            file.seekp(static_cast<streamoff>(pos) - static_cast<streamoff>(sizeof(student)));
            // Write the updated record back to the file
            file.write(reinterpret_cast<char*>(&st), sizeof(student));
            cout << "Marks updated successfully.\n";
            break; // Exit the loop after updating
        }
    }

    if (!found) {
        cout << "Record not found.\n";
    }

    file.close(); // Close the file after updating
}

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    getdata(num); // Call the function to get data and write it to file
    displayData(); // Display data from file
    update(); // Call the function to update marks
    displayData(); // Display updated data from file

    return 0;
}
