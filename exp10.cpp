#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    // Open a file in both read and write mode
    file.open("example.txt", ios::in | ios::out | ios::trunc);

    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }

    // Writing some content to the file
    file << "Hello, this is a test.";

    // Using tellp() to get the current position of output pointer
    streampos writePos = file.tellp();
    cout << "Position of output pointer after writing: " << writePos << endl;

    // Move the output pointer to the beginning
    file.seekp(0, ios::beg);

    // Using tellp() again to verify the pointer has moved
    writePos = file.tellp();
    cout << "Position of output pointer after moving to start: " << writePos << endl;

    // Move input pointer to the end of the file
    file.seekg(0, ios::end);

    // Using tellg() to get the current position of input pointer
    streampos readPos = file.tellg();
    cout << "Position of input pointer at the end of file: " << readPos << endl;

    // Close the file
    file.close();

    return 0;
}