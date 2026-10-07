#include <iostream>
#include <string>
#include "Book Class/Book.h"
#include "Book Class/PrintedBook.h"
#include "Database_Code/LibraryDatabase.h"
#include "Exceptions/LibraryException.h"

void displayMenu() {
    std::cout << "\n====================================" << std::endl;
    std::cout << "     LIBRARY MANAGEMENT SYSTEM      " << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "1. Add Book Record" << std::endl;
    std::cout << "2. Register Patron" << std::endl;
    std::cout << "3. Is Book Available?" << std::endl;
    std::cout << "4. Update Book Status to Available" << std::endl;
    std::cout << "5. Print Transaction Logs" << std::endl;
    std::cout << "6. End / Exit Program" << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "Enter your choice (1-6): ";
}

int main() {
  LibraryDatabase db("Database_Text_File/books.txt", "Database_Text_File/patrons.txt");

  try {
    db.loadBooks();
    db.loadPatrons();
  } catch (const LibraryException& e) {
      std::cerr << "Initialization Error: " << e.what() << std::endl;
  }

  int choice = 0;
  while (choice != 6) {
    displayMenu();
    if (!(std::cin >> choice)) {
      std::cout << "Invalid input. Please enter a number." << std::endl;
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      continue;
    }

    switch (choice) {
      case 1:
        std::cout << "\n[Executing] Add Book Record..." << std::endl;
        break;
      case 2:
        std::cout << "\n[Executing] Register Patron..." << std::endl;
        break;
      case 3:
        std::cout << "\n[Executing] Checking Book Availability..." << std::endl;
        break;
      case 4:
        std::cout << "\n[Executing] Updating Book Status..." << std::endl;
        break;
      case 5:
        std::cout << "\n[Executing] Printing Transaction Logs..." << std::endl;
        break;
      case 6:
        std::cout << "\nExiting Library Management System. Progress Saved!" << std::endl;
        break;
      default:
        std::cout << "\nInvalid selection. Choose an option between 1 and 6." << std::endl;
    }
  }
  return 0;
}
