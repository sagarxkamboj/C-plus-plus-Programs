#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    Complex operator+(const Complex & other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") 
             << (imag >= 0 ? imag : -imag) << "i" << endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

   
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;


    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex c1(real1, imag1), c2(real2, imag2);
    Complex sum = c1 + c2;


    cout << "The sum of the complex numbers is: ";
    sum.display();

    return 0;
}