# library-management-system
A lightweight, console-based application designed to manage a library's book inventory. This project demonstrates core Object-Oriented Programming (OOP) concepts and efficient data handling in C++.

Features

Book Registration: Add new books with a unique ID, Title, and Author.

Real-time Inventory: View a complete list of all books and their current availability status.

Borrowing Logic: Search for books by ID and mark them as "Borrowed" or "Available" using a boolean toggle.

Buffer Management: Implements cin.ignore() and cin.getline() to handle string inputs with spaces and prevent input stream errors.




Technical Highlights

Data Structure: Utilizes a struct for the Book data model to ensure a clean, low-level memory footprint.

Encapsulation: Uses a Library class to manage an array of objects, keeping the data logic separate from the main execution loop.

Memory Management: Currently uses a fixed-capacity array (100 books) for simplicity and speed.
