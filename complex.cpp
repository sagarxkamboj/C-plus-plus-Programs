#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Method to display the complex number
    void display() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }

    // Method to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the + operator
    Complex operator+(const Complex& other) const {
        return add(other);
    }
};

int main() {
    // Input real and imaginary parts of the first complex number
    double real1, imag1;
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    // Create the first complex number
    Complex c1(real1, imag1);

    // Input real and imaginary parts of the second complex number
    double real2, imag2;
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    // Create the second complex number
    Complex c2(real2, imag2);

    // Add the two complex numbers
    Complex sum = c1 + c2;

    // Display the result
    cout << "The sum of the complex numbers is: ";
    sum.display();

    return 0;
}