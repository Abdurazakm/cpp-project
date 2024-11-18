#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{

    string search_passport_num, name[101], sex[101], age[101], passport_num[101];
    int i, fcc = 1, ecc = 31;
    char choise[10], class_choise[10], y_or_n[10], display[10]; // we use array of characters in choises to hanle errors like:
                                                                //  -input other than numbers, -entering more than one characters

homepage: // Is a label to come to home page (The home page helps not to exit program until flight ends.)

    cout << "\nWellcome to X-AIRLINE home page !! " << endl;
    cout << "  1. Assign a seat\n";
    cout << "  2. Display option (search,seat status)\n"; // Home page section.
    cout << "  3. Exit\n";
    cout << "Enter your choice: ";
invalid_choise_1:            // label for invalid choise.

    cin.getline(choise, 10); // cin >> choise;
    for (char i = 1; i < strlen(choise); i++)
    {

        //   if (choise[1]!='\0'){
        if(choise[i]!='\0')
        { // Error handle when more than enters more than one character.
            cout << "Please enter a valid input again: ";
            goto invalid_choise_1;
        }
    }

    switch (choise[0])
    {
    case '1': // assigning seat section.

        cout << "--------Assigning a seat-------\n";
    assign_person: // Label when their is need to come to assign for a person again.
        cout << "  1. For first class.";
        if (fcc > 30)
        {
            cout << "(full)";
        }
        cout << endl;
        cout << "  2. For economy class.";
        if (ecc > 100)
        {
            cout << "(full)";
        }
        cout << endl;
        cout << "  3. Return to home page." << endl;

        cout << "Enter your choice: ";
      
    invalid_choise_2: // Label for invalid class choise.

           
       
             cin >> class_choise;
             if (class_choise[i] != '\0')
            { // Error handle when more than enters more than one character.
                cout << "Please enter a valid input again: ";
                goto invalid_choise_2;
            }
        
        if (class_choise[0] != '1' && class_choise[0] != '2' && class_choise[0] != '3')
        { // error handling when choise is different from 1 or 2.
            cout << "Please enter a valid input again: ";
            goto invalid_choise_2;
        }

        switch (class_choise[0])
        {
        case '1':
        first_class:
            if (fcc > 30)
            {
                cout << "SORRY!! The first class section is full.\n";
                cout << "Is it acceptable to be placed in the economy section? 'Y'for yes..'N'for no: ";
            invalid_choise_3: // label for invalid yes or no choise
                cin >> y_or_n;
                if (y_or_n[1] != '\0')
                { // Error handle when more than enters more than one character.
                    cout << "Please enter a valid input again: ";
                    goto invalid_choise_3;
                }

                y_or_n[0] = toupper(y_or_n[0]);
                if (y_or_n[0] == 'Y')
                {
                    goto economy_class;
                }
                else if (y_or_n[0] == 'N')
                {
                    cout << "The next flight leaves in 3 hours!!\n";
                    cout << "-----------------------------------\n";
                    goto homepage;
                }
                else
                {
                    cout << "Please enter a valid input again: "; // Error handling when input differnt from y or n.
                    goto invalid_choise_3;
                }
            }
            else
            {
                cin.ignore();
                cout << "Enter your name: ";
                getline(cin, name[fcc]); // First class data input section.
                cout << "Enter your sex: ";
                getline(cin, sex[fcc]);
                cout << "Enter youe age: ";
                cin >> age[fcc];
                cout << "Enter your passport number: ";
                cin >> passport_num[fcc];
                cout << "--------------------------\n";
                cout << "SEAT ADDED SUCCESFULLY!!\n";
                cout << "--------------------------\n";
                cout << "Your seat number is " << fcc << endl;
                ++fcc;
                cout << "If you want to add again press 'Y' OR any single character key to go to home page: ";
            invalid_choise_4: // label for invalid yes or no choise
                cin >> y_or_n;
                if (y_or_n[1] != '\0')
                { // Error handle when more than enters more than one character.
                    cout << "Please enter a valid input again: ";
                    goto invalid_choise_4;
                }

                y_or_n[0] = toupper(y_or_n[0]);
                if (y_or_n[0] == 'Y')
                {
                    goto assign_person;
                }
                else
                {
                    goto homepage;
                }
            }

        case '2':
        economy_class:
            if (ecc > 100)
            {
                cout << "SORRY!! The economy class section is full.\n";
                cout << "Is it acceptable to be placed in the first section? 'Y'for yes..'N'for no: ";
            invalid_choise_5: // label for invalid yes or no choise
                cin >> y_or_n;
                if (y_or_n[1] != '\0')
                { // Error handle when more than enters more than one character.
                    cout << "Please enter a valid input again: ";
                    goto invalid_choise_5;
                }
                y_or_n[0] = toupper(y_or_n[0]);
                if (y_or_n[0] == 'Y')
                {
                    goto first_class;
                }
                else if (y_or_n[0] == 'N')
                {
                    cout << "The next flight leaves in 3 hours!!\n";
                    cout << "-----------------------------------\n";
                    goto homepage;
                }
                else
                {
                    cout << "Please enter a valid input!!\n"; // Error handling when input differnt from y or n.
                    goto invalid_choise_5;
                }
            }
            else
            {
                cin.ignore();
                cout << "Enter your name: ";
                getline(cin, name[ecc]);
                cout << "Enter your sex: "; // Economy class data input section.
                getline(cin, sex[ecc]);
                cout << "Enter youe age: ";
                cin >> age[ecc];
                cout << "Enter your passport number: ";
                cin >> passport_num[ecc];
                cout << "--------------------------\n";
                cout << "SEAT ADDED SUCCESFULLY!!\n";
                cout << "--------------------------\n";
                cout << "Your seat number is " << ecc << endl;
                ++ecc;
                cout << "If you want to add again press 'Y' OR any single character key to go to home page: ";
            invalid_choise_6: // label for invalid yes or no choise
                cin >> y_or_n;
                if (y_or_n[1] != '\0')
                { // Error handle when more than enters more than one character.
                    cout << "Please enter a valid input again: ";
                    goto invalid_choise_6;
                }
                y_or_n[0] = toupper(y_or_n[0]);
                if (y_or_n[0] == 'Y')
                {
                    goto assign_person;
                }
                else
                {
                    goto homepage;
                }
            }
        case '3':
            goto homepage;
        }
    case '2': // Displaying option.

    displaying_position:
        cout << "\n----------Display options---------- " << endl;
        cout << "  1. Search person (using passport number)\n";
        cout << "  2. display seat status\n";
        cout << "  3. Return to home page\n";
        cout << "Enter your choice: ";
    invalid_choise_7:
        cin >> display;
        if (display[1] != '\0')
        { // Error handle when more than enters more than one character.
            cout << "Please enter a valid input again: ";
            goto invalid_choise_7;
        }
        if (display[0] != '1' && display[0] != '2' && display[0] != '3')
        { // error handling when choise is different from 1 or 2 or 3.
            cout << "Please enter a valid input again: ";
            goto invalid_choise_7;
        }

        switch (display[0])
        {
        case '1': // For searching.
            cout << "..To search for a person.." << endl;
            cout << "Enter the passport number: ";
            cin >> search_passport_num;

            for (i = 1; i <= 100; i++)
            {

                if (search_passport_num == passport_num[i]) // Searching code.
                {
                    cout << "==PERSON FOUND==" << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Sex: " << sex[i] << endl;
                    cout << "Age: " << age[i] << endl;
                    cout << "seat number: " << i << endl;

                    goto displaying_position;
                }
            }

            if (i > 100)
            { // Out put when their is no person with such passport number.
                cout << "--------------------------------------------------------------" << endl;
                cout << "\nTheir is no person with this passport number please try again.\n"
                     << endl;
                cout << "--------------------------------------------------------------" << endl;

                goto displaying_position;
            }
        case '2': // Display seat status.

            cout << "\n----------FIRST CLASS STSTUS (" << fcc - 1 << "/30)----------\n";
            cout << "________________________________________________________________" << endl;
            cout << "|NAME                |SEX    |PASSPORT_NUMBER     |SEAT_NUMBRE |" << endl;
            cout << "|____________________|_______|____________________|____________|" << endl;
            for (i = 1; i <= fcc - 1; i++)
            {
                cout << "|" << setw(20) << left << name[i];
                cout << "|" << setw(7) << left << sex[i]; // Displaying all first class assigned persons.
                cout << "|" << setw(20) << left << passport_num[i];
                cout << "|" << setw(12) << left << i << "|";
                cout << endl;
            }
            cout << "|--------------------------------------------------------------|" << endl;

            cout << "\n----------ECONOMY CLASS STSTUS (" << ecc - 31 << "/70)----------\n";
            cout << "________________________________________________________________" << endl;
            cout << "|NAME                |SEX    |PASSPORT_NUMBER     |SEAT_NUMBRE |" << endl;
            cout << "|____________________|_______|____________________|____________|" << endl;
            for (i = 31; i <= ecc - 1; i++)
            {
                cout << "|" << setw(20) << left << name[i];
                cout << "|" << setw(7) << left << sex[i];
                cout << "|" << setw(20) << left << passport_num[i]; // Displaying all economy class assigned persons.
                cout << "|" << setw(12) << left << i << "|";
                cout << endl;
            }
            cout << "|--------------------------------------------------------------|" << endl;

            goto displaying_position;
            break;
        case '3':
            goto homepage;
        }

    case '3': // Exit.
        cout << "\n-----THANK YOU FOR USING X-AIRLINE------\n"
             << endl;
        break;

    default: // Error handling for invalid input.
        cout << "please enter a valid input again: ";
        goto invalid_choise_1;
    }

    return 0;
}