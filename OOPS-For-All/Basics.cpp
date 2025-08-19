#include<bits/stdc++.h>
using namespace std;

class Car{
	public:
        string brand;
        string model;
        int year;
};

int main () {


	Car C1 , C2; 

	C1.year = 2866;
	C1.brand = "BMW";
	C1.model = "NEW Model";


	cout << C1.brand << " " << C1.model << " " <<C1.year;
	cout<<endl;	
    
}
