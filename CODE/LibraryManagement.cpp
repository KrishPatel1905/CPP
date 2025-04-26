#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    bool isIssued;
};

vector<Book> library;

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cout << "Enter Book Title: ";
    cin.ignore();
    getline(cin, b.title);
    b.isIssued = false;
    library.push_back(b);
    cout << "Book added successfully!\n";
}

void displayBooks() {
    cout << "\nLibrary Books:\n";
    for (auto &b : library) {
        cout << "ID: " << b.id << ", Title: " << b.title
             << ", Status: " << (b.isIssued ? "Issued" : "Available") << endl;
    }
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (auto &b : library) {
        if (b.id == id) {
            if (!b.isIssued) {
                b.isIssued = true;
                cout << "Book issued successfully!\n";
            } else {
                cout << "Book is already issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    for (auto &b : library) {
        if (b.id == id) {
            if (b.isIssued) {
                b.isIssued = false;
                cout << "Book returned successfully!\n";
            } else {
                cout << "This book was not issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n----- Library Management System -----\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: cout << "Exiting system. Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
