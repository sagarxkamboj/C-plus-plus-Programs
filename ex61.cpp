#include <iostream>
using namespace std;
class Int {
private:
    int value;

public:
    Int() : value(0) {}

    Int(int val) : value(val) {}

    void display() const {
        cout << value;
    }

    Int operator+(const Int& other) const {
        return Int(value + other.value);
    }
};

int main() {
   
    Int int1(5);
    Int int2(3);
    Int result;

    result = int1 + int2;

    cout << "Result: ";
    result.display();
    cout << endl;

    return 0;
}