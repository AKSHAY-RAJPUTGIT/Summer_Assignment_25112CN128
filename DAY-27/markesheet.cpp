#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int m1, m2, m3;
};

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Marks of 3 Subjects: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    int total = s.m1 + s.m2 + s.m3;
    float percentage = total / 3.0;

    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n===== MARKSHEET =====\n";
    cout << "Roll No   : " << s.rollNo << endl;
    cout << "Name      : " << s.name << endl;
    cout << "Subject 1 : " << s.m1 << endl;
    cout << "Subject 2 : " << s.m2 << endl;
    cout << "Subject 3 : " << s.m3 << endl;
    cout << "Total     : " << total << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade     : " << grade << endl;

    return 0;
}