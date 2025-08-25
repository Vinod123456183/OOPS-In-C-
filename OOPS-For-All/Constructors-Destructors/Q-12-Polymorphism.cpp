Polymorphism

| Concept | Description                                          |
| ------- | ---------------------------------------------------- |
| What    | Ability to perform actions in many forms             |
| Types   | Compile-time, Run-time                               |
| Why     | Flexibility, code reuse, readability                 |
| When    | You want one interface, multiple behaviors           |
| How     | Use inheritance and method overriding or overloading |
| Example | `Dog` and `Cat` overriding `sound()` from `Animal`   |


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


