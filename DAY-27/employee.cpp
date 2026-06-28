#include <iostream>
#include <vector>
using namespace std;
struct Employee {
    int id;
    string name;
    float salary;
};
vector<Employee> employees;
void addEmployee() {
    Employee e;
    cout << "Enter Employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, e.name);
    cout << "Enter Salary: ";
    cin >> e.salary;
   employees.push_back(e);
    cout << "Employee Added Successfully!\n";
}
void displayEmployees() {
    if (employees.empty()) {
        cout << "No Employee Records Found!\n";
        return;
    }
    for (auto e : employees) {
        cout << "\nID: " << e.id
             << "\nName: " << e.name
             << "\nSalary: " << e.salary << endl;
    }
}
void searchEmployee() {
    int id;
    cout << "Enter Employee ID: ";
    cin >> id;
    for (auto e : employees) {
        if (e.id == id) {
            cout << "\nEmployee Found\n";
            cout << "Name: " << e.name
                 << "\nSalary: " << e.salary << endl;
            return;
        }
    }
    cout << "Employee Not Found!\n";
}
void updateEmployee() {
    int id;
    cout << "Enter Employee ID to Update: ";
    cin >> id;
    for (auto &e : employees) {
        if (e.id == id) {
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, e.name);
            cout << "Enter New Salary: ";
            cin >> e.salary;
            cout << "Record Updated Successfully!\n";
            return;
        }
    }
    cout << "Employee Not Found!\n";
}
void deleteEmployee() {
    int id;
    cout << "Enter Employee ID to Delete: ";
    cin >> id;
    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].id == id) {
            employees.erase(employees.begin() + i);
            cout << "Employee Deleted Successfully!\n";
            return;
        }
    }
    cout << "Employee Not Found!\n";
}
int main() {
    int choice;
    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: cout << "Thank You!\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}