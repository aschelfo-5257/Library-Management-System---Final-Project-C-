#include "Transaction.h"

// Constructor implementation
Transaction::Transaction(std::string tId, std::string d, std::string pId, std::string isbn, std::string tType)
  : transactionId(tId), date(d), patronId(pId), bookIsbn(isbn), type(tType) {}

std::string Transaction::getTransactionId() const { return transactionId; }
std::string Transaction::getDate() const { return date; }
std::string Transaction::getPatronId() const { return patronId; }
std::string Transaction::getBookIsbn() const { return bookIsbn; }
std::string Transaction::getType() const { return type; }

void Transaction::displayTransaction() const {
  std::cout << "ID: " << transactionId << "] " << date
            << " - Patron " << patronId << " "
            << (type == "BORROW" ? "borrowed" : "returned")
            << " ISBN: " << bookIsbn << std::endl;
}
