#include <bits/stdc++.h>
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

    void outputB() {
        cout << "Sum of a and b: " << a + b << endl;
    }
};

class C : public B {
public:
    int c;

    void inputC() {
        cout << "Enter c: ";
        cin >> c;
    }

    void outputABC() {
        cout << "Sum of a, b, and c: " << a + b + c << endl;
    }
};

int main() {
    C obj;

    obj.inputA();     // From class A
    obj.inputB();     // From class B
    obj.inputC();     // From class C
    
    obj.outputB();     // From class C
    obj.outputABC();  // Sum of a + b + c

    return 0;
}


