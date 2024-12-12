#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0, average;

    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for n elements
    float* arr = new float[n];

    // Input numbers from the user
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);  // Pointer notation to access array
        sum += *(arr + i);  // Pointer notation to add to sum
    }

    // Calculate average
    average = sum / n;

    // Output the average
    cout << "Average: " << average << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}