#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str1);

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Find Length\n";
        cout << "2. Concatenate String\n";
        cout << "3. Compare Strings\n";
        cout << "4. Reverse String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Length = " << str1.length() << endl;
                break;

            case 2:
                cout << "Enter another string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str1 + str2 << endl;
                break;

            case 3:
                cout << "Enter another string: ";
                getline(cin, str2);

                if (str1 == str2)
                    cout << "Strings are Equal\n";
                else
                    cout << "Strings are Not Equal\n";
                break;

            case 4: {
                string rev = str1;
                int n = rev.length();

                for (int i = 0; i < n / 2; i++) {
                    swap(rev[i], rev[n - i - 1]);
                }

                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}