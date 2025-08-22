#include <bits/stdc++.h>
using namespace std;

class Bank {
public:
    int balance = 0;

    void deposit(int amount) {
        if (amount < 0) {
            cout << "Enter Positive Amount!" << endl;
        } else {
            balance += amount;
            cout << "Amount Credited In Your Account of : " << amount << endl;
        }
    }

    void withdraw(int amount) {
        if (amount < 0) {
            cout << "Invalid Amount" << endl;
        } else {
            if (balance >= amount) {    // ✅imp   
                balance -= amount;
                cout << "Money Withdrawal of : " << amount << endl;
            } else {
                cout << "Insufficient Balance!" << endl; 
            }
        }
    }

    int balanceCheck() {
        
        if (balance > 0) {
            cout << "Available Balance is : " << balance << endl;
        } else {
            cout << "Zero Or -ve Balance Left" << endl;
        }
        return balance;
    }
};

int main() {
    Bank B1;
    B1.deposit(100);
    B1.withdraw(90);
    B1.balanceCheck();   
}
