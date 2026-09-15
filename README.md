# Library-Management-System---Final-Project-C++-

## Project Overview
This project simulates a small Library Management System that manages books, patrons, and transactions (borrowing and returning). It demonstrates clean Object-Oriented Programming (OOP) design and advanced C++ features (inheritance, polymorphism, encapsulation, operator overloading, and exception handling) in an integrated, real-world context.

## Core Requirements & Architecture :clipboard:
* **Classes (4+):** `Book` (Base), `EBook`, `PrintedBook`, `Patron`, `Transaction`, and `Library`.
* **Inheritance & Polymorphism:** `EBook` and `PrintedBook` inherit from `Book`, overriding virtual methods like `displayInfo()`.
* **Operator Overloading:** Overloads the `==` and `<<` operators for both `Book` and `Patron` classes to allow easy comparisons and standard stream printing.
* **Data Collections:** Stored efficiently using `std::vector` and `std::map` containers.
* **File I/O:** Loads database collections from text/CSV files and dynamically saves updates back to disk.

## Application Inputs and Outputs :paperclips:
### Expected Inputs:
* **Database Files:** Reads text configuration streams (`books.txt` and `patrons.txt`) containing pre-formatted comma-separated assets on startup.
* **User Actions:** Accepts keyboard selections from a console-based, menu-driven command interface.
* **Transactional Contexts:** Processes explicit ID values and text title names provided by the operator during runtime actions (e.g., searching or processing rentals).

### Expected Outputs:
* **Console Interfaces:** Displays structured lists of library contents, distinct member data, and transaction logs on-screen.
* **Database Files:** Overwrites persistent external assets (`books.txt` and `patrons.txt`) on exit to preserve session state changes.
* **Transaction Logs:** Appends diagnostic record entries to a shared operations tracking document (`transactions.txt`).
* **Exception Logging:** Outputs explicit runtime error responses to the standard error stream (`std::cerr`) when bad parameters or data faults occur.
