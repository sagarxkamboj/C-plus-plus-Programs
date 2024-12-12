#include <iostream>
#include <cmath>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    void display() const {
        std::cout << real << (imag >= 0 ? " + " : " - ") << std::abs(imag) << "i" << std::endl;
    }
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};
int main() {
    double real1, imag1, real2, imag2;

    std::cout << "Enter the real and imaginary parts of the first complex number: ";
    if (!(std::cin >> real1 >> imag1)) {
        std::cerr << "Invalid input. Please enter valid numbers." << std::endl;
        return 1;
    }

    std::cout << "Enter the real and imaginary parts of the second complex number: ";
    if (!(std::cin >> real2 >> imag2)) {
        std::cerr << "Invalid input. Please enter valid numbers." << std::endl;
        return 1;
    }

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);
    Complex sum = c1 + c2;
    std::cout << "The sum of the complex numbers is: ";
    sum.display();

    return 0;
}