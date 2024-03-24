#include <iostream>
using namespace std;
class Add {
public:
    int x = 0;
    void getdata(int y) {
        x = y;
    }
    int putdata() {
        int reversedNumber = 0;
        int originalNumber = x;
        while (x != 0) {
            int digit = x % 10;
            reversedNumber = reversedNumber * 10 + digit;
            x /= 10;
        }
        return reversedNumber;
    }
};

int main() {
    Add aa;
    aa.getdata(123);
    int ans = aa.putdata();

    cout << ans << endl;

    return 0;
}
