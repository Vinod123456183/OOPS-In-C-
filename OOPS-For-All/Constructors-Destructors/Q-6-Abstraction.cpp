Abstraction means hiding the complex details and showing only the important features to the user.
	You focus on what an object does, not how it does it.


Why use Abstraction?
	To simplify the interface for the user.
		To hide unnecessary implementation details.
			To improve security by hiding data or logic.
				To make code easier to maintain and modify.
					So ethical hacker can use pattern to delete data
	




When to use Abstraction?
	When you want to hide complex details from the user.
		When you want to provide a simple interface for a complex system.
			When you want to separate the usage from implementation.
	


// Abstraction using Constructor

#include <bits/stdc++.h>
using namespace std;

class Phone {
    static int count;  
    int volume;

public:
    Phone(int volume) {
        this->volume = volume;
        count++;
 
    }

    void setVolume(int volume) {
        if (volume >= 0 && volume <= 100) {
            this->volume = volume;
        } else {
            cout << "Invalid Volume" << endl;
        }
    }

    int getVolume() const {
        return volume;
    }

    static int getCount() {
        return count;
    }
};

 
int Phone::count = 0;

int main() {
    Phone P1(10);
    P1.setVolume(12);
    cout << "Volume of P1: " << P1.getVolume() << endl;

    Phone P2(50);
    P2.setVolume(100);
    cout << "Volume of P2: " << P2.getVolume() << endl;

    cout << "Total Phone objects created: " << Phone::getCount() << endl;

    return 0;
}







#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    // Setter
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks!" << endl;
        }
    }

    // Getter
    int getMarks() const {
        return marks;
    }
};

int main() {
    Student s1;             // No constructor used (default constructor)
    s1.setMarks(85);        // Set value using setter
    cout << "Marks: " << s1.getMarks() << endl;   // Get value using getter

    return 0;
}


