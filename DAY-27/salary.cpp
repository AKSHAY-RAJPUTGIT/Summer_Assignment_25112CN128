#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int empId;
    string name;
    float basicSalary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    employees.push_back(e);
    cout << "Employee Added Successfully!\n";
}

void displayEmployees() {
    if (employees.empty()) {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\nEmployee Salary Details\n";
    for (auto e : employees) {
        float bonus = e.basicSalary * 0.10;
        float totalSalary = e.basicSalary + bonus;

        cout << "\nID: " << e.empId
             << "\nName: " << e.name
             << "\nBasic Salary: " << e.basicSalary
             << "\nBonus: " << bonus
             << "\nTotal Salary: " << totalSalary << "\n";
    }
}

void searchEmployee() {
    int id;
    cout << "Enter Employee ID: ";
    cin >> id;

    for (auto e : employees) {
        if (e.empId == id) {
            cout << "\nEmployee Found\n";
            cout << "Name: " << e.name
                 << "\nSalary: " << e.basicSalary << endl;
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
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
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}