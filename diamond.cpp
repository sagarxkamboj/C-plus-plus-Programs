#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Show of A" << endl;
    }
};

// Virtual inheritance to resolve diamond problem
class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.show(); // No ambiguity due to virtual inheritance

    return 0;
} 