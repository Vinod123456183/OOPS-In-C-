/*
- Create a Laptop class. Initialize brand & price using a parameterized constructor.
- Write a Person class where destructor prints “Object destroyed”. Create and delete objects to observe behavior.
*/

#include <bits/stdc++.h>
using namespace std;

class Laptop {
    
    public:
    
    string brand;
    int price;
    
    Laptop(string brand , int price){
        this->brand=brand;
        this->price=price;
    }
    
    void ans() {
        cout << brand <<" - " << price << endl;
    }
    
    ~Laptop() {
        cout << "Object Destroyed " << endl;
    }
    
};

int main() {
    Laptop L1("ASUS" , 10000);
    L1.ans();
    
}




