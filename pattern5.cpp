#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

      
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = n - 1; i >= 1; i--) {
       
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

    
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}