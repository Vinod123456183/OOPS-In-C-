#include <iostream>
using namespace std;

class Book {
public: 
    string title;
    string author;
    int price;

    void input() {
        cout << "Enter Title Of The Book: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void output() {
        cout << "\nBook Details:\n";
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "\n";
    }

    bool isAffordable(int x) {
        return price < x;
    }
};

int main() {
    Book b1;
    b1.input();
    b1.output();

    int maxPrice;
    cout << "\nEnter Maximum Affordable Price: ";
    cin >> maxPrice;

    if (b1.isAffordable(maxPrice)) {
        cout << "The book is affordable.\n";
    } else {
        cout << "The book is too expensive.\n";
    }

    return 0;
}
