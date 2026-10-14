#ifndef PRINTEDBOOK_H
#define PRINTEDBOOK_H

#include "Book.h"

class PrintedBook : public Book {
private:
    int pageCount;

public:
    // Updated to exactly match your 4-parameter implementation file
    PrintedBook(std::string title, std::string author, std::string isbn, int pageCount);
    
    void displayInfo() const override;
    int getPageCount() const;
    void setPageCount(int count);
};

#endif
