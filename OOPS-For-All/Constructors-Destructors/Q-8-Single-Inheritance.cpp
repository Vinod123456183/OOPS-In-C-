
#include <iostream>
using namespace std;

class A {
public:
    int a;

    void inputA() {
        cout << "Enter a: ";
        cin >> a;
    }
};

class B : public A {
public:
    int b;

    void inputB() {
        cout << "Enter b: ";
        cin >> b;
    }

    void ans() {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    B b1;
    b1.inputA();  // Input for a (from class A)
    b1.inputB();  // Input for b (from class B)
    b1.ans();
}
