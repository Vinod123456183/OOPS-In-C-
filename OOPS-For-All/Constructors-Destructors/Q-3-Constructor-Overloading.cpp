Constructor With Diff Parameter 
  -> constructor name will be same but
    -> function name will be different



#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    int x = 1, y = 1, z = 1, a = 1, b = 1;

    Car(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Car(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Car(int x, int y, int z, int a) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->a = a;
    }

    Car(int x, int y, int z, int a, int b) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->a = a;
        this->b = b;
    }

    // Overloaded functions with different parameters
    void ans() {
        cout << "x * y = " << x * y << endl;
    }

    void ans3() {
        cout << "x * y * z = " << x * y * z << endl;
    }

    void ans4() {
        cout << "x * y * z * a = " << x * y * z * a << endl;
    }

    void ans5() {
        cout << "x * y * z * a * b = " << x * y * z * a * b << endl;
    }
};

int main() {
    Car C1(10, 20);
    Car C2(10, 20, 30);
    Car C3(10, 20, 30, 40);
    Car C4(10, 20, 30, 40, 50);

    C1.ans();
    C2.ans3();
    C3.ans4();
    C4.ans5();

    return 0;
}
