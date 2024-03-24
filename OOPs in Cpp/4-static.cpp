// Static is done using scope resol operator

#include <iostream>
using namespace std;
class A {
public:
    int a = 10;
    static string b ;
};
string A::b = "2 0"; // Definition of static member variable
int main() {
    
    A aa, bb;
    
    cout << aa.a << " " << bb.a << endl; 
    
    bb.a = 30; 
    
    cout << aa.a << " " << bb.a << endl; 
    
    cout << A::b << endl; 
    
}



#include <iostream>
using namespace std;
class A {
public:
    int a;
    static string s;

    A(int aa) {
        a = aa;
    }

    void display() {
        cout << " " << a << endl;
        cout << " " << s << endl;
    }
};

string A::s = "GEHU"; // Definition and initialization of static member variable

int main() {
    A aaa(10);
    aaa.display();

    A bbb(20);
    bbb.display();

    return 0;
}

