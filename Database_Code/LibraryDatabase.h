#ifndef LIBRARY_DATABASE_H
#define LIBRARY_DATABASE_H

#include <string>
#include <vector>
#include "../Book Class/Book.h"
#include "../Exceptions/LibraryException.h"

class LibraryDatabase {
private:
  std::string bookFilePath;
  std::string patronFilePath;

public:
  LibraryDatabase(std::string bookPath, std::string patronPath)
    : bookFilePath(bookPath), patronFilePath(patronPath) {}

  void loadBooks();
  void loadPatrons();
};

#endif
