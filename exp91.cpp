#include <iostream>
using namespace std;

int main() {
    // Step 1: Dynamically allocate memory for an integer using 'new'
    int* ptr = new int; // 'ptr' now points to a dynamically allocated integer

    // Step 2: Assign a value to the dynamically allocated memory
    *ptr = 42; // Storing the value 42 at the memory location 'ptr' points to

    // Step 3: Display the value stored in the memory
    cout << "Value stored at dynamically allocated memory: " << *ptr << endl;

    // Step 4: Deallocate memory using 'delete'
    delete ptr; // Frees the memory that was allocated by 'new'

    // Step 5: Set the pointer to nullptr to avoid dangling pointer issues
    ptr = nullptr;

    return 0;
}