#include <iostream>
using namespace std;

class Ticket {
private:
    string passengerName;
    int age;
    int seatNo;
    bool booked;

public:
    Ticket() {
        booked = false;
    }

    void bookTicket() {
        if (booked) {
            cout << "Ticket already booked!\n";
            return;
        }

        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        booked = true;
        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket() {
        if (!booked) {
            cout << "No ticket booked.\n";
            return;
        }

        booked = false;
        cout << "Ticket Cancelled Successfully!\n";
    }

    void displayTicket() {
        if (!booked) {
            cout << "No ticket booked.\n";
            return;
        }

        cout << "\n----- Ticket Details -----\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Age            : " << age << endl;
        cout << "Seat Number    : " << seatNo << endl;
    }
};

int main() {
    Ticket t;
    int choice;

    do {
        cout << "\n===== Railway Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.bookTicket();
                break;
            case 2:
                t.cancelTicket();
                break;
            case 3:
                t.displayTicket();
                break;
            case 4:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}