#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string department;
    string city;
    double salary;
public:

    Employee(int id , string name, string department, string city, double salary) {
        this->id = id;
        this->name = name;
        this->department = department;
        this->city = city;
        this->salary = salary;
    }

    Employee(int id, std::string name) : 
        Employee(id, name, "Unknown", "Unknown", 0.0) 
            {}

    Employee(int id, std::string name, std::string department) :
        Employee(id, name, department, "Unknown", 0.0) 
            {}

    Employee(int id, std::string name, std::string department, std::string city) : 
        Employee(id, name, department, city, 0.0) 
            {}

    Employee() : 
        Employee(0, "Unknown", "Unknown", "Unknown", 0.0)
            {}

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "City: " << city << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Using different constructors
    Employee emp1(1, "John Doe", "Engineering", "New York", 75000);
    Employee emp2(2, "Jane Smith", "Marketing");
    Employee emp3(3, "Alice Johnson");
    Employee emp4;

    emp1.display();
    cout << endl;
    emp2.display();
    cout << endl;
    emp3.display();
    cout << endl;
    emp4.display();

}
