-> static int count_total; is a class-level variable.
   -> Shared by all objects of the class. It's used here to count how many objects currently exist.
      -> It is declared here but defined outside the class later.
        -> Const Called automatically when an object is created.
           -> since constructor call automatic when obj created so static member will call that much time so we can count objects


#include<bits/stdc++.h>
using namespace std;

class Car {
  
  static int count_total;               // using static define stati_variable;

  public:
    string name;
    int no;

    Car(string name , int no) {
        this->name = name;
        this->no=no;
        count_total++;
    }
    
    void ans() {
        cout << name <<" - " << no << endl;
    }
    
    static int total_objects() {        // static int function_name
        return count_total;
    }
    
};


int Car::count_total=0;                 // Class_name :: static_variable = 0  // initiliz

int main() {
    Car C1("Vinod1" , 10);
    Car C2("Vinod2" , 20);
    Car C3("Vinod3" , 30);
    Car C4("Vinod4" , 40);
    Car C5("Vinod5" , 50);
    C1.ans();
    cout << Car::total_objects();       // Class_name :: function_name()
    
}












| OOP Concept      | Definition                                             | Real-World Analogy                                             |
| ---------------- | ------------------------------------------------------ | -------------------------------------------------------------- |
| 1. Encapsulation | Bundling data and methods into a single unit (class)   | A capsule (medicine) hides the internal components             |
| 2. Abstraction   | Showing only essential features and hiding the details | A car dashboard shows speed, not engine mechanics              |
| 3. Inheritance   | Reusing code from existing classes                     | A child inherits traits from parents                           |
| 4. Polymorphism  | Same interface, different behavior                     | One word, many meanings (e.g. “run” in sports, code, business) |
