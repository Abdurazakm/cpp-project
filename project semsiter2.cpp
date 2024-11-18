#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
#include <cstdlib>
#include <cctype>

struct house
{
    string city;
    int city_code;
    string subcity;
    int subcity_code;
    string house_type;
    int price;
    float size_of_h;
    int num_bed;
    bool avilablity;
    int id;
};
struct bussiness
{
    unsigned long int phone_num;
    string buss_name;
    string name;
    string password;
    string city;
    int ID;
};
struct personal
{
    string name;
    string password;
    string city;
    int ID;
};

int error_handle(char choise[])
{
    if (isdigit(choise[0]) && strlen(choise) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    // returns 0--if error occurs.
    // returns 1--if error doesr.n't occu
    //  returns 0--if error occurs.
    //  returns 1--if error doesn't occur.

} // used to chech error that occur in every time a person chooses.
//   -it help us check whether the input is single character and digit.
// int generate_random_id() {
//       srand(time(0)); // Seed for random generator
//       return rand();
//  }
void display_best_choise(vector<house> hs, string user_city_for_feed)
{
    int best_choises_forfeed[5];
    int index = 0;
    for (int i = 0; i < hs.size(); ++i)
    {
        if (hs[i].city == user_city_for_feed)
        {
            best_choises_forfeed[index++] = i;
            if (index >= 5)
                break;
        }
    }
    // best_choises_forfeed[index] = -1;  // Indicating the end of the valid indices

    // Displaying the best choices
    cout << "Best choices in city " << user_city_for_feed << " are:" << endl;
    for (int i = 0; i < index; ++i)
    {
        cout << "House " << best_choises_forfeed[i] << ": ";
        cout << "City: " << hs[best_choises_forfeed[i]].city << ": ";
        cout << "Subcity: " << hs[best_choises_forfeed[i]].subcity << ", ";
        cout << "Price: " << hs[best_choises_forfeed[i]].price << ", " << endl;
    }
}

int login(vector<house> hs, vector<personal> &p_i, vector<bussiness> &b_i, string &user_city_for_feed)
{
    char choice[5];
    string name, password, username;
    cout << "   1. personal " << endl;
    cout << "   2. bussiness " << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    while (error_handle(choice) == 0 /* 0 shows there is an error*/)
    {
        cout << "please enter a valid input again" << endl;
        cin >> choice;
    }
    switch (choice[0])
    {
    case '1': // Personal user
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        for (int i = 0; i < p_i.size(); i++)
        {
            
            if (username == p_i[i].name && password == p_i[i].password)
            {
                user_city_for_feed = p_i[i].city;
                cout << "Successful login" << endl;

                // Display houses for personal user
                display_best_choise(hs, user_city_for_feed);
                return 'p'; // Personal home page
            }
        }
        cout << "Invalid username or password." << endl;
        cout << "   1. Would you like to try again " << endl;
        cout << "   2. create a new account ? "<<endl;
        cout << "Enter yout choice: ";
        char retryChoice;
        cin >> retryChoice;
        if (retryChoice == '1')
        {
            return login(hs, p_i, b_i, user_city_for_feed);
        }
        else if (retryChoice == '2')
        {
            return 'c'; // Create a new account
        }
        break;

    case '2': // Business user
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        for (int i = 0; i < b_i.size(); i++)
        {
            
            if (username == b_i[i].name && password == b_i[i].password)
            {
                cout << "Successful login" << endl;
                return 'b'; // Business home page
            }
        }
        cout << "Invalid username or password." << endl;
        cout << "1. Would you like to try again " << endl;
        cout << "2. create a new account ? "<<endl;
        cout << "Enter yout choice: ";
        cin >> retryChoice;
        if (retryChoice == '1')
        {
            return login(hs, p_i, b_i, user_city_for_feed);
        }
        else if (retryChoice == '2')
        {
            return 'c'; // Create a new account
        }
        break;

    default:
        cout << "Invalid choice." << endl;
        return 'c';
    }

    return 'e'; // Error case
}

// accept values (also whether user is a personal or business user)
// store users city on "user_city_for_feed[]"
// check whether the user_name exist and the password is correct(when user name don't mach -give choise to repeat again or creat an account)
// feed him best 4 houses dipending on his origin city(for personal users only)
// return p-(for presonal home page),b-(for business home page),c-(creat a new account)


// stores the index(4 indexes) of structure variable who choosen as best for that city in the "best_choises_forfeed[]";
// display best 4 choices with its city,subcity and price below each house.
void creat_account(vector<personal> &p_i, vector<bussiness> &b_s)
{
    // Define structures for personal and business accounts
    personal get_p;
    bussiness get_b;

    // Define vectors to store names and IDs of created accounts
    vector<string> people;
    vector<string> businesses;
    vector<int> Buid; // Assuming this is for storing IDs of business accounts

    char c;
fault:
    cout << "Do you want to create a personal or business account" << endl;
    cout << "Press 'p' for personal account and 'b' for business account: ";
    cin >> c;

    switch (c)
    {
    case 'p':
        cout << "\nEnter personal account details:\n";
    errorp:
        cout << "Name: ";
        cin >> get_p.name;
        cout << "Password: ";
        cin >> get_p.password;
        cout << "City: ";
        cin >> get_p.city;

        // Check if the name already exists
        for (int i = 0; i < people.size(); i++)
        {
            if (get_p.name == people[i])
            {
                cout << "Error: name already exists. Please choose a different name.\n";
                goto errorp;
            }
        }

        // Add the name to the vector of people
        people.push_back(get_p.name);
        // Add the personal account details to its respective vector or structure
        p_i.push_back(get_p);
        cout << "Personal account created successfully!\n";
        break;

    case 'b':
        cout << "\nEnter Business account details:\n";
    errorb:
        cout << "Enter Business Name: ";
        cin >> get_b.buss_name;
        cout << "Name: ";
        cin >> get_b.name;
        cout << "Password: ";
        cin >> get_b.password;
        cout << "City: ";
        cin >> get_b.city;
        cout << "Phone number: ";
        cin >> get_b.phone_num;

        // Generate a unique ID for the business account
        get_b.ID = businesses.size() + 1;
        cout << "Your ID is " << get_b.ID << endl;

        // Check if the username already exists
        for (int i = 0; i < businesses.size(); i++)
        {
            if (get_b.name == businesses[i])
            {
                cout << "Error: username already exists. Please enter a different username.\n";
                goto errorb;
            }
        }

        // Add the name to the vector of businesses
        businesses.push_back(get_b.name);
        // Add the business account details to its respective vector or structure
        b_s.push_back(get_b);
        cout << "Business account created successfully!\n";
        break;

    default:
        cout << "Error input. Please choose either 'p' or 'b'\n";
        goto fault;
    }
}

void Add_house(vector<house> &hs)
{
    house new_house;
    int typ_h;

    cout << "Enter city: ";
    cin >> new_house.city;
cout << "Enter city code: ";
    cin >> new_house.city_code;

    cout << "Enter subcity: ";
    cin >> new_house.subcity;

    cout << "Enter subcity code: ";
    cin >> new_house.subcity_code;

    cout << "Enter house type (1 for apartment, 2 for condo, 3 for normal house): ";
    cin >> typ_h;
    switch (typ_h)
    {
    case 1:
        new_house.house_type = "apartment";
        break;
    case 2:
        new_house.house_type = "condo";
        break;
    case 3:
        new_house.house_type = "normal house";
        break;
    default:
        cout << "Invalid house type entered.";
        return;
    }

    cout << "Enter price: ";
    cin >> new_house.price;

    cout << "Enter size of the house: ";
    cin >> new_house.size_of_h;

    cout << "Enter number of bedrooms: ";
    cin >> new_house.num_bed;

    cout << "Enter availability (1 for available, 0 for not available): ";
    cin >> new_house.avilablity;
    new_house.id = hs.size();
    cout << "your id four house is " << new_house.id;

    hs.push_back(new_house);
}

// Add the new house to the vector

// add house
// give for each string input an intiger or single character ///////code///// and store int in another member variable;
// make it while loop and asks whether to add again or not.

void Update_house_information(vector<house> hs)
{
    int house_id;
    cout << " please enter the house id";
    cin >> house_id;
    int house_index;
    for (int i = 0; i < hs.size(); ++i)
    {
        if (hs[i].id == house_id)
        {
            house_index = i; // Return index if house with given ID is found
        }
    }
    cout << "Enter new information for the house at index " << house_index << ":" << endl;

    cout << "City: ";
    // cin >> ws; // To ignore any leading whitespace
    getline(cin, hs[house_index].city);

    cout << "City code: ";
    cin >> hs[house_index].city_code;

    cout << "Subcity: ";

    getline(cin, hs[house_index].subcity);

    cout << "Subcity code: ";
    cin >> hs[house_index].subcity_code;

    cout << "House type: ";
    // To ignore any leading whitespace
    getline(cin, hs[house_index].house_type);

    cout << "Price: ";
    cin >> hs[house_index].price;

    cout << "Size of house: ";
    cin >> hs[house_index].size_of_h;

    cout << "Number of bedrooms: ";
    cin >> hs[house_index].num_bed;

    cout << "Availability (1 for true, 0 for false): ";
    int availability;
    cin >> availability;
    hs[house_index].avilablity = (availability != 0);
    
}

// update house
// make it while loop and asks whether to update again or not.
void view_more(vector<house> &h, int choose)
{
    if (choose < 0 || choose >= h.size())
    {
        cout << "Invalid house selection.\n";
        return;
    }
    house &hs = h[choose];
    cout << "LOCATION: " << hs.city << endl;
    cout << "SUBCITY: " << hs.subcity << endl;
    cout << "HOUSE TYPE: " << hs.house_type << endl;
    cout << "PRICE: " << hs.price << endl;
    cout << "SIZE: " << hs.size_of_h << endl;
    cout << "BEDROOMS: " << hs.num_bed << endl;
    cout << "AVAILABILITY: " << (hs.avilablity ? "Available" : "Not available") << endl;

} // It display all information about "hs[choose] " house also some image at the begning.

// void search(vector<house> h); // accept the conditions for searching
                              // map input values into intigers and single characters to make the comparison easy
                              // compare using represented code
                              // make it do while loop to ask the user to repeat again
                              // else finish


int main()
{
    char choise[5]; // both variables used to accept values(int or char) when user chooses.
    int choose;
    char help_variable; // we will use it when we need a single character that will be used in many cases.
    vector<house> hs;
    vector<personal> p_i;
    vector<bussiness> b_i;
    string user_city_for_feed;
first_page:
    cout << "WELLCOME TO RENT AND CONNECT!!!" << endl;
    cout << "    1, LOGIN" << endl;
    cout << "    2, DON'T HAVE AN ACCOUNT? CREAT ONE." << endl;
    cout << "    3, EXIT" << endl;
    cout << "ENTER YOUR CHOISE: ";
    cin >> choise;
    while (error_handle(choise) == 0 /* 0 shows their is an error*/)
    {
    error_check1: // acts as a lable when error inputs come.
        cout << "please enter a valid input again" << endl;
        cin >> choise;
    }
    switch (choise[0])
    {
    case '1':

        int best_choises_forfeed[4];

        help_variable = login(hs, p_i, b_i, user_city_for_feed);

        if (help_variable == 'p')
        {
        customer_home_page:
            cout << "CUSTOMER HOME PAGE" << endl;
            display_best_choise(hs, user_city_for_feed);
            cout << "    1, CHOOSE FROM THIS HOUSES" << endl;
            cout << "    2, SEARCH BY( CITY,ADDRESS(SUBCITY),HOUSE TYPE,PRICE RANGE)." << endl;
            cout << "    3, EXIT" << endl;
            cout << "ENTER YOUR CHOISE: ";
            cin >> choise;
            while (error_handle(choise) == 0 /* 0 shows their is an error*/)
            {
            error_check2: // acts as a lable when error inputs come.
                cout << "please enter a valid input again" << endl;
                cin >> choise;
            };

            switch (choise[0])
            {
            case '1':
                cout << "Which house (1,2,3 or 4)" << endl;
                cin >> choose;
                choose = best_choises_forfeed[choose - 1]; /*-1 comes b/c of index start from 0 not 1*/
                                                           // This put the index a user chooses to variable "choose".
                view_more(hs, choose);
                goto customer_home_page;
                break;
            case '2':
                // search(hs);
                goto customer_home_page;

                break;
            case '3':
                return 0;
                break;
            default:
                goto error_check2;
                break;
            }
        }
        else if (help_variable == 'b')
        {
        business_home_page:
            cout << "BUSINESS HOME PAGE" << endl;
            cout << "    1. Add house" << endl;
            cout << "    2. Update information about your hourse" << endl;
            cout << "    3. Back to first page" << endl;
            cout << "    4. Exit" << endl;
            cout << "Enter your choise: ";
            cin >> choise;
            while (error_handle(choise) == 0 /* 0 shows their is an error*/)
            {
            error_check3: // acts as a lable when error inputs come.
                cout << "please enter a valid input again" << endl;
                cin >> choise;
            };

            switch (choise[0])
            {
            case '1':
                Add_house(hs);
                goto business_home_page;
                break;
            case '2':
                Update_house_information(hs);
                goto business_home_page;
                break;

            case '3':
                goto first_page;
                break;
            case '4':
                return 0;

            default:
                goto error_check3;
                break;
            }
        }
        else if (help_variable == 'c')
        {
            creat_account(p_i, b_i);
        }

        break;
    case '2':
        creat_account(p_i, b_i);
        break;
    case '3':
        return 0;
        break;
    default:
        goto error_check1;
        break;
    }
    goto first_page;
    return 0;
}