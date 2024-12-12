#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int x = 5;
        int y = 5 / x; // This is okay, x is not zero
        cout << "Result of 5 / " << x << " is " << y << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    try {
        int x = 0;
        if (x == 0) {
            throw runtime_error("Division by zero"); // Manually throwing an exception
        }
        int y = 5 / x; // This line will not be executed due to the manual throw above
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    try {
        string str = "Hello";
        str.at(10); // This will throw a std::out_of_range exception
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (...) {
        cerr << "Error: Unknown exception" << endl;
    }

    return 0;
}