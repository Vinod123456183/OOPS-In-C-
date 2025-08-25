// function overriding
#include<bits/stdc++.h>
using namespace std;

class A {
  public:
  
    void display() {
        cout << "inside A Display " << endl;
    }
};


class B : public A {
    public:
    void display(){
        cout << "Inside B display " << endl;
        // A::display();
    }
};

int main()  {
    B b;
    b.display();
    b.A::display();
}



