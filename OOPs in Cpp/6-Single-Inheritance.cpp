#include <iostream>
using namespace std;
class A {
    protected :
    int a ;
    public :
    void input()  {
        cout <<  "Enter A" <<endl ;
        cin >> a;
    }
};

class B : public A {
    int y ;
    public : 
    void get ()  {
        cout << "Enter Y " << endl ;
        cin >> y;
    }
    void put() {
        cout << a + y << " ";
    }
};
        
int main()  {
    B aa;
    aa.input();
    aa.get();
    aa.put();
}
