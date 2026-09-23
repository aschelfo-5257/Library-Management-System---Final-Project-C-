#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

enum class Genre { FICTION, NON_FICTION, TEXTBOOK, MYSTERY, THRILLER };
enum class BookStatus { AVAILABLE, CHECKED_OUT, RESERVED };

class Book {
protected:
    std::string title;
    std::string author;
    Genre genre;
    BookStatus status;

public:
    // Constructor
    Book(std::string t, std::string a, Genre g);
    
    // Virtual Destructor for safe inheritance
    virtual ~Book() = default;

    // Polymorphic method
    virtual void displayInfo() const;
    
    // Getters & Setters
    void setStatus(BookStatus s);
    BookStatus getStatus() const;

    // Operator Overloading
    bool operator==(const Book& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Book& b);
};

#endif
