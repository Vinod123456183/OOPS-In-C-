#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int a;
    string s;
    static string Clg_Name;

    A(int aa, string ss) {
        s = ss;
        a = aa;
    }

    void display() {
        cout << " " << a << endl;
        cout << " " << s << endl;
        cout << " " << Clg_Name << endl;
    }

    static void Diss() {
        Clg_Name = "Rama";
    }
};

string A::Clg_Name = "GEhU";

int main() {
    A abc(1, "shiva");
    abc.display();
    A::Diss();
    cout << "\n";
    abc.display();

    return 0;
}
