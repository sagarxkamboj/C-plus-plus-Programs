#include <iostream>
using namespace std;

// Single Inheritance
// One class inherits from one base class
class Animal {
public:
    void sound() {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

// Multiple Inheritance
// One class inherits from more than one base class
class Vehicle {
public:
    void move() {
        cout << "Vehicle moves\n";
    }
};

class Fuel {
public:
    void refuel() {
        cout << "Vehicle refueled\n";
    }
};

class Car : public Vehicle, public Fuel {
public:
    void drive() {
        cout << "Car is driving\n";
    }
};

// Multilevel Inheritance
// One class inherits from a derived class (chain of inheritance)
class LivingBeing {
public:
    void breathe() {
        cout << "Living being breathes\n";
    }
};

class Human : public LivingBeing {
public:
    void walk() {
        cout << "Human walks\n";
    }
};

class Student : public Human {
public:
    void study() {
        cout << "Student studies\n";
    }
};

// Hierarchical Inheritance
// Multiple classes inherit from the same base class
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies\n";
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows\n";
    }
};

// Hybrid Inheritance
// Combination of more than one type of inheritance
class Electronics {
public:
    void powerOn() {
        cout << "Electronics powered on\n";
    }
};

class Mobile : public Electronics {
public:
    void call() {
        cout << "Calling from mobile\n";
    }
};

class SmartDevice : public Car, public Mobile {
public:
    void connect() {
        cout << "Smart device connected\n";
    }
};

// Main function to test the inheritance types
int main() {
    // Single Inheritance example
    Dog d;
    d.sound(); // From Animal
    d.bark();  // From Dog

    // Multiple Inheritance example
    Car c;
    c.move();   // From Vehicle
    c.refuel(); // From Fuel
    c.drive();  // From Car

    // Multilevel Inheritance example
    Student s;
    s.breathe(); // From LivingBeing
    s.walk();    // From Human
    s.study();   // From Student

    // Hierarchical Inheritance example
    Bird b;
    b.sound(); // From Animal
    b.fly();   // From Bird

    Cat cat;
    cat.sound(); // From Animal
    cat.meow();  // From Cat

    // Hybrid Inheritance example
    SmartDevice sd;
    sd.move();    // From Car (inherited from Vehicle)
    sd.call();    // From Mobile (inherited from Electronics)
    sd.connect(); // From SmartDevice

    return 0;
}