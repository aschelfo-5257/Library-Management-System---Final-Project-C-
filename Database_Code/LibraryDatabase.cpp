#include "LibraryDatabase.h"
#include <fstream>
#include <iostream>

// Implementation to parse books log
void LibraryDatabase::loadBooks() {
  std::ifstream file(bookFilePath);

  if (!file.is_open) {
    throw FileNotFoundException(bookFilePath);
  }

  std::cout << "Loading books database successfully from: " << bookFilePath << "\n";
  // Loop through file rows to populate vector...
}

void LibraryDatabase::loadPatrons() {
  std::ifstream file(patronFilePath);

  if (!file.is_open()) {
    throw FileNotFoundException(patronFilePath);
  }

  std::cout << "Loading patrons database successfully from: " << patronFilePath << "\n";
}
