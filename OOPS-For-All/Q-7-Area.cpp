/*Write a class Rectangle with length & width. Add functions to calculate area and perimeter.
*/

#include <iostream>
using namespace std;

class Rectangle {
    public: 
    int l;
    int b;


    void in() {
        cin >> l>>b;
    }
    void area() {
        cout <<l*b ;
    }
    void per() {
        cout << 2*(l+b) ;
    }

};

int main() {
    Rectangle r;
    r.in();
    r.area();
    r.per();
}






























/*Write a class Rectangle with length & width. Add functions to calculate area and perimeter.
*/

#include <iostream>
using namespace std;

class Rectangle {
    public: 
    int l;
    int b;


    void in() {
        cin >> l>>b;
    }
    void area(int l , int b) {
        cout <<l*b ;
    }
    void per(int l , int b) {
        cout << 2*(l+b) ;
    }

};

int main() {
    Rectangle r;
    
    r.area(10,20);
    r.per(10 ,10);
}