#include <iostream>
using namespace std;
class A {
    protected :
        int x;
    public:
        void input()  {
            cout <<  "Enter x" << endl;
            cin >> x;
        }
};
class B : public A {
    protected :
    int y ;
    public : 
    
    void get_y ()  {
        cout << " Enter Y " << endl ;
        cin >> y;
    }
};

class C : public B  {
    int z ;
    public : 

    void get_z ()  {
        cout << " Enter z " << endl ;
        cin >> z;
    }
    void ans ()  {
        cout << "Sum IS " << x+y+z;
    }
};

int main()  {
    C aa;
    aa.input();
    aa.get_y();
    aa.get_z();
    aa.ans();
}
