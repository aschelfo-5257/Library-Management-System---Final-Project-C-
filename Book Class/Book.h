#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

enum class Genre { FICTION, NON_FICTION, TEXTBOOK, MYSTERY, THRILLER };

class Book {
protected:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    Book(std::string t, std::string a, std::string i, bool avail = true)
        : title(t), author(a), isbn(i), isAvailable(avail) {}

    virtual ~Book() = default;

    std::string getTitle() const { return title; }
    std::string getIsbn() const { return isbn; }
    bool getAvailability() const { return isAvailable; }
    void setAvailability(bool status) { isAvailable = status; }

    virtual void displayInfo() const = 0; // Pure virtual makes it polymorphic!
};

#endif
