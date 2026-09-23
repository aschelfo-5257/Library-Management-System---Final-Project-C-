#include "EBook.h"

// Constructor implementation
Book::Book(std::string t, std::string a, std::string i, bool available)
  : title(t), author(a), isbn(i), isAvailable(available) {}

// Print base details
void Book::displayInfo() const {
  std::cout << "Title: " << title << "\nAuthor: " << author
            << "\nISBN: " << isbn << "\nAvailable: " << (isAvailable ? "Yes" : "No") << std::endl;
}

// Overload << for simple stream printing
std::ostream& operator<<(std::ostream& os, const Book& book) {
  os << book.title << " by " << book.author << "[ISBN: " << book.isbn << "]";
  return os;
}
