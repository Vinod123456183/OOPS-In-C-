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
