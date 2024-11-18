#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void writeVectorToFile(const vector<int>& vec, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (int num : vec) {
            outFile << num << " ";
        }
        outFile.close();
    } else {
        cerr << "Unable to open file for writing.\n";
    }
}

vector<int> readVectorFromFile(const string& filename) {
    vector<int> vec;
    ifstream inFile(filename);
    if (inFile.is_open()) {
        int num;
        while (inFile >> num) {
            vec.push_back(num);
        }
        inFile.close();
    } else {
        cerr << "Unable to open file for reading.\n";
    }
    return vec;
  abebe
}

int main() {
    string name;
    int numElements;
    vector<int> vec;

    cout << "What is your name: ";
    getline(cin, name);
    
    cout << "How many elements: ";
    cin >> numElements;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < numElements; ++i) {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    string filename = "vector.txt";
    writeVectorToFile(vec, filename);
    
    
    vec = readVectorFromFile(filename);
    

    cout << "Hi " << name << ", you have entered the following elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
 
    unordered_map<int, int> frequencyMap;
    for (int num : vec) {
        frequencyMap[num]++;
    }
    
    int mostFrequent = vec[0], nonFrequent = vec[0];
    for (int num : vec) {
        if (frequencyMap[num] > frequencyMap[mostFrequent]) {
            mostFrequent = num;
        }
    }
    
    for (int num : vec) {
        if (frequencyMap[num] == 1) {
            nonFrequent = num;
            break;
        }
    }
    
    cout << "The first frequent element is: " << mostFrequent << endl;
    cout << "The first non-frequent element is: " << nonFrequent << endl;

    return 0;
}
/*write a c++ code to find the first the frequent and non frequent elemnt in a vector of integer. you shoud write
the vector of integers in file; and fetch the value again form the file and display and work with the elemnt
scenario: what is your name: abebe
how many element:6
vector list: 2 4 6 2 4 7
hi abebe you have entered the following element and the first frequent elment is 2 and
non frequent element 6 */
