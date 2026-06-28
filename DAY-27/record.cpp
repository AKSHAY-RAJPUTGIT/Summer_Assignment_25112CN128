#include <iostream>
#include <vector>
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};
vector<Student> students;
void addStudent() {
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Marks: ";
    cin >> s.marks;
    students.push_back(s);
    cout << "Student Added Successfully!\n";
}
void displayStudents() {
    if (students.empty()) {
        cout << "No Records Found!\n";
        return;
    }
    cout << "\nStudent Records:\n";
    for (auto s : students) {
        cout << "Roll No: " << s.rollNo
             << ", Name: " << s.name
             << ", Marks: " << s.marks << endl;
    }
}
void searchStudent() {
    int roll;
    cout << "Enter Roll No to Search: ";
    cin >> roll;
    for (auto s : students) {
        if (s.rollNo == roll) {
            cout << "Record Found!\n";
            cout << "Name: " << s.name
                 << ", Marks: " << s.marks << endl;
            return;
        }
    }
    cout << "Student Not Found!\n";
}
void updateStudent() {
    int roll;
    cout << "Enter Roll No to Update: ";
    cin >> roll;
    for (auto &s : students) {
        if (s.rollNo == roll) {
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, s.name);
            cout << "Enter New Marks: ";
            cin >> s.marks;
            cout << "Record Updated!\n";
            return;
        }
    }
    cout << "Student Not Found!\n";
}
void deleteStudent() {
    int roll;
    cout << "Enter Roll No to Delete: ";
    cin >> roll;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            students.erase(students.begin() + i);
            cout << "Record Deleted!\n";
            return;
        }
    }
    cout << "Student Not Found!\n";
}
int main() {
    int choice;
    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}