#include <iostream>
using namespace std;

// Function to perform division
float divide(int numerator, int denominator) {
    if (denominator == 0) {
        // Throw an exception if denominator is zero
        throw "Division by zero error!";
    }
    return (float)numerator / denominator;
}

int main() {
    int num1, num2;
    float result;

    // Input two integers
    cout << "Enter the numerator: ";
    cin >> num1;
    cout << "Enter the denominator: ";
    cin >> num2;

    // Try block to attempt division
    try {
        result = divide(num1, num2); // Call divide function
        cout << "The result is: " << result << endl; // Display result if no exception
    }
    // Catch block to handle divide by zero exception
    catch (const char* errMsg) {
        cout << "Error: " << errMsg << endl;
    }

    return 0;
}