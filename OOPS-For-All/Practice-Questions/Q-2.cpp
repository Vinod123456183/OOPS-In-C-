/*
    Build a Movie class. Use constructor overloading for different ways to initialize (title only, title+year, etc.).
*/

#include <bits/stdc++.h>
using namespace std;

class Movie {
    
private:
    string name;
    int year;
    string director;
    string genre;

public:
    // Default constructor
    Movie() {
        name = "Unknown";
        year = 0;
        director = "Unknown";
        genre = "Unknown";
    }

    // Constructor with title only
    Movie(string name) {
        this->name = name;
        year = 0;
        director = "Unknown";
        genre = "Unknown";
    }

    // Constructor with title and year
    Movie(string name, int year) {
        this->name = name;
        this->year = year;
        director = "Unknown";
        genre = "Unknown";
    }

    // Constructor with title, year, and director
    Movie(string name, int year, string director) {
        this->name = name;
        this->year = year;
        this->director = director;
        genre = "Unknown";
    }

    // Constructor with all details
    Movie(string name, int year, string director, string genre) {
        this->name = name;
        this->year = year;
        this->director = director;
        this->genre = genre;
    }

    void displayInfo() const {
        cout << "Title: " << name << "\n";
        cout << "Year: " << (year != 0 ? to_string(year) : "Unknown") << "\n";
        cout << "Director: " << director << "\n";
        cout << "Genre: " << genre << "\n";
        cout << "---------------------\n";
    }
};

int main() {
    
    Movie m;  // Default constructor
    Movie m1("Kakashi");  // Title only
    Movie m2("Naruto", 2002);  // Title + year
    Movie m3("Spirited Away", 2001, "Hayao Miyazaki");  // Title + year + director
    Movie m4("The Godfather", 1972, "Francis Ford Coppola", "Crime");  // All details

    m.displayInfo();
    m1.displayInfo();
    m2.displayInfo();
    m3.displayInfo();
    m4.displayInfo();


}



