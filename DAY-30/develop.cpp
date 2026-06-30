#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

Employee emp[100];
int count = 0;

// Function to Add Employee
void addEmployee() {
    cout << "\nEnter Employee ID: ";
    cin >> emp[count].id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, emp[count].name);

    cout << "Enter Department: ";
    getline(cin, emp[count].department);

    cout << "Enter Salary: ";
    cin >> emp[count].salary;

    count++;
    cout << "Employee Added Successfully!\n";
}

// Function to Display Employees
void displayEmployees() {
    if (count == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\nEmployee Records:\n";
    for (int i = 0; i < count; i++) {
        cout << "\nID: " << emp[i].id;
        cout << "\nName: " << emp[i].name;
        cout << "\nDepartment: " << emp[i].department;
        cout << "\nSalary: " << emp[i].salary << endl;
    }
}

// Function to Search Employee
void searchEmployee() {
    int id;
    bool found = false;

    cout << "Enter Employee ID to Search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            cout << "\nEmployee Found!\n";
            cout << "ID: " << emp[i].id << endl;
            cout << "Name: " << emp[i].name << endl;
            cout << "Department: " << emp[i].department << endl;
            cout << "Salary: " << emp[i].salary << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Employee Not Found!\n";
}

// Function to Delete Employee
void deleteEmployee() {
    int id;
    bool found = false;

    cout << "Enter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
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
}

int main() {
    int choice;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Delete Employee";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 5:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}