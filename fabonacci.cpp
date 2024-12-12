#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n, num1 = 0, num2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << num1 << ", " << num2 << ", ";
    nextTerm = num1 + num2;
    while (nextTerm <= n) {
        cout << nextTerm << ", ";   
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }
    cout << endl;

    cout << "Missing numbers up to " << n << ": ";
    num1 = 0;
    num2 = 1;
    nextTerm = num1 + num2;

    for (int i = 0; i <= n; ++i) {
        if (i != num1 && i != num2 && i != nextTerm) {
            cout << i << ", ";
        } else if (i == nextTerm) {
            num1 = num2;
            num2 = nextTerm;
            nextTerm = num1 + num2;
        }
    }
    cout << endl;

    return 0;
}