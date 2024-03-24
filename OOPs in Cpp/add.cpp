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
