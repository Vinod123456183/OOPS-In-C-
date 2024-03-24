#include <iostream>
#include <cmath>

using namespace std;

class PrimeChecker {
public:
    int isPrime(int num) {
        if (num <= 1) {
            return 0; // 0 represents not prime
        }
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                return 0; // 0 represents not prime
            }
        }
        return 1; // 1 represents prime
    }
};

int main() {
    PrimeChecker checker;
    int num;
    
    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    int result = checker.isPrime(num);
    
    if (result == 1) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
