#include <iostream>

using namespace std;

// Using a struct for simplicity in this low-level version
struct Book {
    int id;
    char title[50];
    char author[50];
    bool isIssued;
};

class Library {
private:
    Book books[100]; // Fixed capacity of 100 books
    int bookCount;

public:
    Library() : bookCount(0) {}

    void addBook() {
        if (bookCount >= 100) {
            cout << "Library is full!" << endl;
            return;
        }

        cout << "Enter Book ID: ";
        cin >> books[bookCount].id;
        cin.ignore(); // Clear the newline character from the buffer

        cout << "Enter Title: ";
        cin.getline(books[bookCount].title, 50);

        cout << "Enter Author: ";
        cin.getline(books[bookCount].author, 50);

        books[bookCount].isIssued = false;
        bookCount++;
        
        cout << "Book added successfully!" << endl;
    }

    void showInventory() {
        if (bookCount == 0) {
            cout << "No books in library." << endl;
            return;
        }

        cout << "\n--- Current Inventory ---" << endl;
        for (int i = 0; i < bookCount; i++) {
            cout << "[" << books[i].id << "] " << books[i].title 
                 << " by " << books[i].author;
            if (books[i].isIssued) {
                cout << " (Borrowed)";
            } else {
                cout << " (Available)";
            }
            cout << endl;
        }
    }

    void borrowBook() {
        int searchId;
        cout << "Enter ID to borrow: ";
        cin >> searchId;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == searchId) {
                if (!books[i].isIssued) {
                    books[i].isIssued = true;
                    cout << "Success! Enjoy reading " << books[i].title << endl;
                } else {
                    cout << "Sorry, this book is already borrowed." << endl;
                }
                return;
            }
        }
        cout << "Book ID not found." << endl;
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n1. Add Book\n2. Show Inventory\n3. Borrow Book\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) lib.addBook();
        else if (choice == 2) lib.showInventory();
        else if (choice == 3) lib.borrowBook();
        
    } while (choice != 4);

    cout << "System closed." << endl;
    return 0;
}
