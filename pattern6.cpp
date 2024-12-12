#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows for the rectangle: ";
    cin >> rows;
    cout << "Enter the number of columns for the rectangle: ";
    cin >> cols;


    for (int i = 0; i < cols; i++) {
        cout << "*";
    }
    cout << endl;

    
    for (int i = 1; i <= rows - 2; i++) {
        cout << "*";
        for (int j = 1; j <= cols - 2; j++) {
            cout << " "; 
        }
        cout << "*"; 
        cout << endl;
    }

    
    for (int i = 0; i < cols; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}