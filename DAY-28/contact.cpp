#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

vector<Contact> contacts;

void addContact() {
    Contact c;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, c.name);

    cout << "Enter Phone Number: ";
    getline(cin, c.phone);

    contacts.push_back(c);
    cout << "Contact Added Successfully!\n";
}

void displayContacts() {
    if (contacts.empty()) {
        cout << "No Contacts Found!\n";
        return;
    }

    cout << "\n--- Contact List ---\n";
    for (int i = 0; i < contacts.size(); i++) {
        cout << i + 1 << ". "
             << contacts[i].name
             << " - "
             << contacts[i].phone
             << endl;
    }
}

void searchContact() {
    string name;
    cin.ignore();

    cout << "Enter Name to Search: ";
    getline(cin, name);

    for (auto &c : contacts) {
        if (c.name == name) {
            cout << "\nContact Found!\n";
            cout << "Name: " << c.name << endl;
            cout << "Phone: " << c.phone << endl;
            return;
        }
    }

    cout << "Contact Not Found!\n";
}

void deleteContact() {
    string name;
    cin.ignore();

    cout << "Enter Name to Delete: ";
    getline(cin, name);

    for (int i = 0; i < contacts.size(); i++) {
        if (contacts[i].name == name) {
            contacts.erase(contacts.begin() + i);
            cout << "Contact Deleted Successfully!\n";
            return;
        }
    }

    cout << "Contact Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}