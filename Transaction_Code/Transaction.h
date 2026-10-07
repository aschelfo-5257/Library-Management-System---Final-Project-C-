#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>

class Transaction {
private:
  std::string transactionId;
  std::string date;
  std::string patronId;
  std::string bookIsbn;
  std::string type; // "BORROW" or "RETURN"

public:
  Transaction(std::string tID, std::string d, std::string pId, std::string isbn, std::string tType);

  std::string getTransactionId() const;
  std::string getDate() const;
  std::string getPatronId() const;
  std::string getBookIsbn() const;
  std::string getType() const;

  // Log display
  void displayTransaction() const;
};

#endif
