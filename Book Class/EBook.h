#ifndef EBOOK_H
#define EBOOK_H

#include <string>
#include <iostream>

class Book {
protected:
  std::string title;
  std::string author;
  std::string isbn;
  bool isAvailable;

public:
  // Constructor
  Book(std::string t, std::string a, std::string i, bool avail = true)
    : title(t), author(a), isbn(i), isAvailable(avail) {}

  // Virtual Destructor for safe inheritance
  virtual ~Book() = default;

  // Getters & Setters
  std::string getTitle() const {
    return title;
  }
  std::string getIsbn() const {
    return isbn;
  }
  bool getAvailability() const {
    return isAvailable;
  }
  void setAvailability() const {
    isAvailable = status;
  }

  // Polymorphic method
  virtual void displayInfo() const = 0;

  // Operator Overloading
  bool operator==(const Book& other) const {
    return this->isbn == other.isbn;
  }

  friend std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << " | Author: " << book.author << " | ISBN: " << book.isbn;
    return os;
  }
};

#endif
