#ifndef PRINTED_BOOK_H
#define PRINTED_BOOK_H

#include "Book.h"

class PrintedBook : public Book {
private:
  int pageCount;

public:
  // Constructor matching attributes to UML Diagram
  PrintedBook(std::string title, std::string author, std::string isbn, int pageCount);

  int getPageCount() const;
  void setPageCount(int count);

  void displayInfo() const override;
};

#endif
