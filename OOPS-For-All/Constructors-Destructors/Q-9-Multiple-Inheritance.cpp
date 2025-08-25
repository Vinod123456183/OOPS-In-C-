multiple inheritance without getter setteer
// multiple inheritance + encapsulation 

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    
    void inputA(){
        cout << "Enter a" << endl;
        cin >> a;
    }
};

class B{
    public:
        int b;
    
    void inputB(){
        cout<< "Enter B" << endl;
        cin >> b;
    }
    
};


class C{
    public:
        int c;
    
    void inputC(){
        cout<< "Enter C" << endl;
        cin >> c;
    }
};

class X : public A , public B , public C {
    
    public:
    int d;
    
    X(int d) {
        this->d = d;
    }
    
    void setD(int d){
        this->d=d;
    }
    
    void getD(){
        cout << d << endl;
    }
    
    void display() {
        cout << "No Value Are Here of a , b , c , d : "  << endl;
        cout << a + b + c + d;
    }
};


int main() {
    X D1(1);     // d = 1
    D1.inputA();
    D1.inputB();
    D1.inputC();
    D1.setD(40);   // d = 40 using setter
    D1.getD();
    D1.display();
}

