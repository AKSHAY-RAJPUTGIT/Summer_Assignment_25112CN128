#include <iostream>
using namespace std;

int main() {
    int itemId[100], quantity[100];
    float price[100];
    int n = 0, choice, id, i;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Item ID: ";
                cin >> itemId[n];

                cout << "Enter Quantity: ";
                cin >> quantity[n];

                cout << "Enter Price: ";
                cin >> price[n];

                n++;
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                if(n == 0) {
                    cout << "Inventory is Empty!\n";
                    break;
                }

                cout << "\nID\tQuantity\tPrice\n";
                for(i = 0; i < n; i++) {
                    cout << itemId[i] << "\t"
                         << quantity[i] << "\t\t"
                         << price[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Item ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++) {
                    if(itemId[i] == id) {
                        cout << "Item Found!\n";
                        cout << "Quantity: " << quantity[i] << endl;
                        cout << "Price: " << price[i] << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Item Not Found!\n";
                break;

            case 4:
                cout << "Enter Item ID: ";
                cin >> id;

                for(i = 0; i < n; i++) {
                    if(itemId[i] == id) {
                        cout << "Enter New Quantity: ";
                        cin >> quantity[i];
                        cout << "Quantity Updated!\n";
                        break;
                    }
                }

                if(i == n)
                    cout << "Item Not Found!\n";
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}