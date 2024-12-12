#include <iostream>
using namespace std;

// Function to calculate cube of an integer
int cube(int n) {
    return n * n * n;
}

// Function to calculate cube of a decimal (float)
float cube(float n) {
    return n * n * n;
}

class Number {
private:
    int value;
public:
    // Constructor to initialize value
    Number(int v) : value(v) {}

    // Overload ++ operator (prefix)
    Number& operator++() {
        ++value; // Increment the value
        return *this;
    }

    // Function to display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Part 1: Function overloading example
    int intNum = 3;
    float floatNum = 2.5;

    cout << "Cube of integer " << intNum << " is: " << cube(intNum) << endl;
    cout << "Cube of float " << floatNum << " is: " << cube(floatNum) << endl;

    // Part 2: Operator overloading example
    Number num(5);

    cout << "Before increment: ";
    num.display();

    // Use the overloaded ++ operator (prefix)
    ++num;

    cout << "After increment: ";
    num.display();

    return 0;
}