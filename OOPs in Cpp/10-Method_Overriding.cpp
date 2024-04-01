#include<iostream>
using namespace std;
class A {
  protected :
  void msg() {
    cout <<" Inside Base Class\n";
  }
}
;
class B : public A {
  public :
  void msg() {
    cout <<" Inside Derived Class\n";
  }
};

int main ()  {

  B aa;

  aa.msg();

}




// To fix 
/*
#include <iostream>

class Base {
public:
    virtual void print(std::ostream& out) const {
        out << "Base";
    }

    friend std::ostream& operator<<(std::ostream& out, const Base& b) {
        b.print(out);
        return out;
    }
};

class Derived : public Base {
public:
    virtual void print(std::ostream& out) const {
        out << "Derived";
    }
};

int main() {
    Base* b = new Derived();
    std::cout << *b << std::endl; // Prints "Derived"
    delete b;
    return 0;
}
*/
