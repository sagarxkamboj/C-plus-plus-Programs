#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0)
            throw "Division by zero error!";
        else
            cout << "Result: " << a / b << endl;

        int arr[5] = {1, 2, 3, 4, 5};
        int index = 6;  // Invalid index
        if (index >= 5)
            throw "Array index out of bounds!";
        else
            cout << "Array element: " << arr[index] << endl;

        int *ptr = nullptr;
        if (ptr == nullptr)
            throw "Null pointer exception!";
        else
            cout << "Pointer value: " << *ptr << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

 return 0;
}