#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    int number;
    string name;
    
    Car()  {
        cout <<" This Is Def Constructor "  << endl;
    }
    
    Car(int number , string name) {
        this->number = number;
        this->name = name;
    }
    
    Car(const Car& c) {
        this->number=c.number;
        this->name=c.name;
    }
    
    Car(Car&& c) {
        cout << "Move Constructor Called" << endl;
        this->number = c.number;
        this->name = move(c.name);  
        c.number = 0;
        c.name = "Zero";
    }

    // Car(int number  = 0 , string name="No-Name") {
    //     this->number=number;
    //     this->name = name;
    // }

    void output ()  {
        cout << number <<" - " << name ;    
    }
    
     
    
};

int main()  {
    Car C1;
    Car C2(10,"vinod");
    Car C3 = C2;
    Car C4 = move(C2);
    Car C5;
    
    C2.output();
    cout << endl;
    C3.output();
    cout << endl;
    C4.output();
    cout << endl;
    // C5.output();
}
