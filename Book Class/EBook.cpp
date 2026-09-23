#include "EBook.h"

// Constructor implementation
EBook::EBook(std::string t, std::string a, std::string i, double size, bool available)
    : Book(t, a, i, available), fileSize(size) {}

// Print base details
void EBook::displayInfo() const {
    Book::displayInfo(); 
    std::cout << "File Size: " << fileSize << " MB" << std::endl;
}

// Overload << for simple stream printing
std::ostream& operator<<(std::ostream& os, const Book& book) {
  os << book.title << " by " << book.author << "[ISBN: " << book.isbn << "]";
  return os;
}
