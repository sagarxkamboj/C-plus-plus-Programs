#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Destructor
    ~Time() {
        cout << "Destructor called for time " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Method to add two Time objects
    Time add(const Time& other) {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + other.hours + result.minutes / 60;
        result.minutes %= 60;
        result.hours %= 24;
        return result;
    }

    // Method to display the time in HH:MM:SS format
    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;

    // Input for the first time
    cout << "Enter the first time (HH MM SS): ";
    cin >> h1 >> m1 >> s1;

    // Input for the second time
    cout << "Enter the second time (HH MM SS): ";
    cin >> h2 >> m2 >> s2;

    // Create Time objects
    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);

    // Add the two times
    Time sum = t1.add(t2);

    // Display the result
    cout << "The sum of the times is: ";
    sum.display();

    return 0;
}