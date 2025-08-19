#include<bits/stdc++.h>
using namespace std;

class Car  {

    public:

    string car_Name;
    string car_Color;
    int car_Price;

    void input()  {
        cout << "Enter Car Name : "; //getline for string only
        getline(cin , car_Name);
        cout << "Enter Car Color : ";
        getline(cin , car_Color);
        cout << "Enter Car Price : ";
        cin >> car_Price;
    
        cin.ignore();
    }
    

    void display() {
        cout << "Car Name :" << car_Name << endl;
        cout << "Car Color :" << car_Color << endl;
        cout << "Car Price :" << car_Price << endl;
    }

};

int main ()  {

    Car C1;
    C1.input();
    C1.display();

}