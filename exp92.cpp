#include <iostream>
#include <fstream> // For file handling
using namespace std;

int main() {
    // Variables for student details
    string name;
    int age;
    float marks;

    // Step 1: Writing student data to a file
    ofstream outFile("students.txt"); // Opening file for writing

    for(int i = 1; i <= 5; i++) {
        // Taking input for each student
        cout << "Enter details for student " << i << endl;
        cout << "Name: ";
        cin.ignore();           // Ignore any leftover input from previous loop
        getline(cin, name);     // Get the full name including spaces
        cout << "Age: ";
        cin >> age;             // Input age
        cout << "Marks: ";
        cin >> marks;           // Input marks

        // Writing data to file
        outFile << name << endl << age << endl << marks << endl;
    }

    outFile.close(); // Closing the file after writing

    // Step 2: Reading student data from the file
    ifstream inFile("students.txt"); // Opening file for reading

    cout << "\nDetails of students from file:\n";
    for(int i = 1; i <= 5; i++) {
        // Reading data from file
        getline(inFile, name);  // Read the name
        inFile >> age;          // Read the age
        inFile >> marks;        // Read the marks
        inFile.ignore();        // Ignore newline after reading numbers

        // Displaying the student details
        cout << "Student " << i << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl << endl;
    }

    inFile.close(); // Closing the file after reading

    return 0;
}