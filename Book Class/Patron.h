#ifndef PATRON_H
#define PATRON_H

#include <string>
#include <vector>
#include <iostream>

class Patron {
private:
    std::string patronID;
    std::string name;
    // Track history using list collections
    std::vector<std::string> borrowedBookIsbns;

public:
    // Constructor
    Patron(std::string id, std::string name);

    // Getters and Setters
    std::string getPatronID() const;
    std::string getName() const;

    // Core functional methods
    void borrowBook(const std::string& isbn);
    void returnBook(const std::string& isbn);

    // Overloaded Operators
    bool operator==(const Patron& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Patron& p);
};

#endif
