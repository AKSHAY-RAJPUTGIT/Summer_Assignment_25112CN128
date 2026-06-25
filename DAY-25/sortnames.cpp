#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> names = {"Sanu", "Rahul", "Amit", "Priya", "Neha"};
    sort(names.begin(), names.end());
    cout << "Names in alphabetical order:\n";
    for (string name : names) {
        cout << name << endl;
    }
    return 0;
}