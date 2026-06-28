#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

vector<Book> books;

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, b.title);

    cout << "Enter Author: ";
    getline(cin, b.author);

    b.issued = false;
    books.push_back(b);

    cout << "Book Added Successfully!\n";
}

void displayBooks() {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }

    cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";
    for (auto &b : books) {
        cout << b.id << "\t" << b.title << "\t\t"
             << b.author << "\t\t"
             << (b.issued ? "Issued" : "Available") << endl;
    }
}

void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (auto &b : books) {
        if (b.id == id) {
            cout << "Book Found!\n";
            cout << "Title: " << b.title << endl;
            cout << "Author: " << b.author << endl;
            cout << "Status: "
                 << (b.issued ? "Issued" : "Available") << endl;
            return;
        }
    }

    cout << "Book not found.\n";
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for (auto &b : books) {
        if (b.id == id) {
            if (b.issued)
                cout << "Book already issued.\n";
            else {
                b.issued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (auto &b : books) {
        if (b.id == id) {
            if (!b.issued)
                cout << "Book was not issued.\n";
            else {
                b.issued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}