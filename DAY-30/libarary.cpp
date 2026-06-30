#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookId;
    string title;
    string author;
};

int main() {
    Book books[100];
    int count = 0, choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Book ID: ";
            cin >> books[count].bookId;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            cout << "Enter Author Name: ";
            getline(cin, books[count].author);

            count++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Books Available!\n";
            } else {
                cout << "\nBook Records:\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nBook ID: " << books[i].bookId;
                    cout << "\nTitle: " << books[i].title;
                    cout << "\nAuthor: " << books[i].author << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].bookId == id) {
                    cout << "\nBook Found!\n";
                    cout << "Book ID: " << books[i].bookId << endl;
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Update: ";
            cin >> id;
            cin.ignore();

            for (int i = 0; i < count; i++) {
                if (books[i].bookId == id) {
                    cout << "Enter New Title: ";
                    getline(cin, books[i].title);

                    cout << "Enter New Author: ";
                    getline(cin, books[i].author);

                    cout << "Book Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Delete: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].bookId == id) {
                    for (int j = i; j < count - 1; j++) {
                        books[j] = books[j + 1];
                    }

                    count--;
                    found = true;
                    cout << "Book Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}