#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() const {
        return length * width;
    }
};

int main() {
    float length, width;

  
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rect(length, width);

    cout << "The area of the rectangle is: " << rect.area() << endl;

    return 0;
}