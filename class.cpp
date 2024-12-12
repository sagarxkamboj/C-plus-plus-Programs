#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    long empNumber;

public:
    
    void getData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> empNumber;
    }

    
    void putData() const {
        cout << "Name: " << name << ", Employee Number: " << empNumber << endl;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    if (numEmployees > MAX_EMPLOYEES) {
        cout << "The maximum number of employees is " << MAX_EMPLOYEES << "." << endl;
        numEmployees = MAX_EMPLOYEES;
    }

   
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].getData();
    }

    
    cout << "\nEmployee details:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].putData();
    }

    return 0;
}