
-> A setter is a function that changes a private variable from outside the class.
   -> We use a setter only if we want to allow changes to a private variable after the object is created.
      -> The changeable data should be accessed using setter and getter.
        -> ❌ Avoiding const in Setters
          -> Best Practice / What Interviewers Like
              -> For different attributes, separate setters are usually preferred.
                -> Because we already set name and rollNumber in the constructor, and we assume they don’t need to change later.

    // Separate setters
    void setMathMarks(int m) { mathMarks = m; }
    void setScienceMarks(int s) { scienceMarks = s; }
    void setEnglishMarks(int e) { englishMarks = e; }



#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int student_id;
    string Batch;
    int marks;

public:
    Student(string name, int student_id, string Batch, int marks) {
        this->name = name;
        this->student_id = student_id;
        this->Batch = Batch;
        this->marks = marks; 
    }

    void setMarks(int marks) {  
        if (marks >= 0 && marks <= 100) {
            this->marks = marks;
        } else {
            cout << "Invalid Marks Entered" << endl;
        }
    }

    int getMarks() const {
        return marks;
    }

    void ans() const {
        cout << name << " - " << student_id << " - " << Batch << " - " << marks << endl;
    }
};

int main() {
    Student S1("Vinod", 10111, "BTech", 84);
    S1.ans();   
    S1.setMarks(95); 
    S1.ans();        
    S1.setMarks(150);



}
