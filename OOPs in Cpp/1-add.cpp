// oops is a programming approach in which we divide program into small part and then we do prograaming seprreatly
// universe is a class and it is denoted by small obj milky way
// class is combiantion of data member and member function

// Add Two no using Class
#include <iostream>
using namespace std;
class Add {
public:
    int a = 0, b = 0;
    void getdata() {
        cout << "Enter The Value Of A : ";
        cin >> a;
        cout << "Enter The Value Of B : ";
        cin >> b;
    }
    void putdata() {
        int sum = a + b;
        cout << "Sum = " << sum << endl;
    }
};
int main() {
    Add aa;
    aa.getdata();
    aa.putdata();
    return 0;
}
