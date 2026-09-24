#include "PrintedBook.h"
#include <iostream>

PrintedBook::PrintedBook(std::string title, std::string author, std::string isbn, int pageCount)
  : Book(title, author, isbn), pageCount(pageCount) {}

int PrintedBook::getPageCount() const {
  return pageCount;
}

void PrintedBook::setPageCount(int count) {
  pageCount = count;
}

// Concrete execution of the virtual layout for Book Class
void PrintedBook::displayInfo() const {
  std::cout << "[Printed Book] Title: " << title
            << ", Author: " << author
            << ", ISBN: " << isbn
            << ", Pages: " << pageCount
            << ", Available: " << (isAvailable ? "Yes" : "No") << std::endl;
}
