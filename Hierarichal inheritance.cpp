//hierachical inheritence 
#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A method\n";
    }
};

// Derived class B
class B : public A {
public:
    void displayB() {
        cout << "Class B method\n";
    }
};

// Derived class C
class C : public A {
public:
    void displayC() {
        cout << "Class C method\n";
    }
};

int main() {
    B objB;
    C objC;
	objB.displayA();
    objB.displayB();
    objC.displayA();
    objC.displayC();
	return 0;
}
