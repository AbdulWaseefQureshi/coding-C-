//pointer to class
#include<iostream>
using namespace std;

class A {
public:
    int x;
    A() {
        x = 10;
        cout << "A constructor\n";
    }
};

class B {
    int y;
    A a;

public:
    B() {
        y = 20;
        cout << "B constructor\n";
    }

    void show() {
        cout << "x = " << a.x << " y = " << y << endl;
    }
};

int main() {
    B b;
    b.show();
    return 0;
}
