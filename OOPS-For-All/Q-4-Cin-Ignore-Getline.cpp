#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3, s4, s5, s6, s7, s8;
    int n1, n2, n3, n4, n5;
 
    cout << "Enter s1 (string): ";
    getline(cin, s1);

    // int
    cout << "Enter n1 (int): ";
    cin >> n1;

    // string
    cin.ignore(); // ← ignore leftover newline
    cout << "Enter s2 (string): ";
    getline(cin, s2);

    // string
    cout << "Enter s3 (string): ";
    getline(cin, s3);

    // string
    cout << "Enter s4 (string): ";
    getline(cin, s4);

    // string
    cout << "Enter s5 (string): ";
    getline(cin, s5);

    // int
    cout << "Enter n2 (int): ";
    cin >> n2;

    // int
    cout << "Enter n3 (int): ";
    cin >> n3;

    // string
    cin.ignore(); // ← ignore leftover newline
    cout << "Enter s6 (string): ";
    getline(cin, s6);

    // string
    cout << "Enter s7 (string): ";
    getline(cin, s7);

    // int
    cout << "Enter n4 (int): ";
    cin >> n4;

    // int
    cout << "Enter n5 (int): ";
    cin >> n5;

    // string
    cin.ignore(); // ← ignore leftover newline
    cout << "Enter s8 (string): ";
    getline(cin, s8);
 
 
    cout << "\n--- OUTPUT ---\n";
    cout << "s1: " << s1 << endl;
    cout << "n1: " << n1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "n2: " << n2 << endl;
    cout << "n3: " << n3 << endl;
    cout << "s6: " << s6 << endl;
    cout << "s7: " << s7 << endl;
    cout << "n4: " << n4 << endl;
    cout << "n5: " << n5 << endl;
    cout << "s8: " << s8 << endl;

    return 0;
}
