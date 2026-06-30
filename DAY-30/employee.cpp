#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int count = 0, choice;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[count].empId;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[count].name);

            cout << "Enter Department: ";
            getline(cin, emp[count].department);

            cout << "Enter Salary: ";
            cin >> emp[count].salary;

            count++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Employee Records Found!\n";
            } else {
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nEmployee ID : " << emp[i].empId;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDepartment  : " << emp[i].department;
                    cout << "\nSalary      : " << emp[i].salary << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    cout << "\nEmployee Found!\n";
                    cout << "ID         : " << emp[i].empId << endl;
                    cout << "Name       : " << emp[i].name << endl;
                    cout << "Department : " << emp[i].department << endl;
                    cout << "Salary     : " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Update: ";
            cin >> id;
            cin.ignore();

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    cout << "Enter New Name: ";
                    getline(cin, emp[i].name);

                    cout << "Enter New Department: ";
                    getline(cin, emp[i].department);

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    cout << "Employee Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    for (int j = i; j < count - 1; j++) {
                        emp[j] = emp[j + 1];
                    }

                    count--;
                    found = true;
                    cout << "Employee Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}