/*
Make a Student class with attributes name, rollNo, and marks. Input values from user and display.
*/


#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
    string name;
    int rollNo;
    unordered_map<string,int>mp;

    void Input() {

        cout << "Enter name : " << endl;
        getline(cin,name);

        cout << "Enter RollNo : " ;
        cin >> rollNo;

        int n;
        cout << "Enter No Of Subjects : " <<endl;
        cin>>n;
        for(int i=0; i<n; i++)  {
            string subject;
            int marks;
            cin>>subject>>marks;
            cout<<"Enter Subject And Marks ";
            mp[subject]=marks;
        }
    }


    void Oupt() {
        cout << "Details " << endl;
        cout << name << " " <<endl  << rollNo ;
        for(auto t : mp) {
            cout << t.first <<" - " << t.second;
            cout<<endl;
        }
    }
};

int main() {
    Student S1;
    S1.Input();
    S1.Oupt();
}