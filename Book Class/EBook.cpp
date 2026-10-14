#include "EBook.h"
#include <iostream>

// Matches the base constructor
EBook::EBook(std::string t, std::string a, std::string i, double size)
    : Book(t, a, i), fileSize(size) {}

void EBook::displayInfo() const {
    std::cout << "[E-Book] Title: " << title
              << ", Author: " << author
              << ", ISBN: " << isbn
              << ", File Size: " << fileSize << " MB"
              << ", Available: " << (isAvailable ? "Yes" : "No") << std::endl;
}
