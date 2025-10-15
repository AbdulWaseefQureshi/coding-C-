//hybrid inheritence 
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A method\n";
    }
};

class B : virtual public A {
public:
    void displayB() {
        cout << "Class B method\n";
    }
};

class C : virtual public A {
public:
    void displayC() {
        cout << "Class C method\n";
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D method\n";
    }
};

int main() {
    D obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();
    return 0;
}
