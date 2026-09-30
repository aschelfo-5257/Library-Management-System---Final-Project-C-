#ifndef LIBRARY_EXCEPTION_H
#define LIBRARY_EXCEPTION_H

#include <stdexcept>
#include <string>

class LibraryException : public std::exception {
protected:
  std::string message;
public:
  explicit LibraryException(const std::string& msg) : message(msg) {}

  virtual const char* what() const noexcept override {
    return message.c_str();
  }
};

class FileNotFoundException : public LibraryException {
public:
  explicit FileNotFoundException(const std::string& filename)
    : LibraryException("Database Error: File could not be opened: " + filename) {}
};

class BookUnavailableException : public LibraryException {
public:
  explicit BookUnavailableException(const std::string& title)
    : LibraryException("Transaction Error: '" + title + "' is currently checked out or reserved.") {}
};

#endif
