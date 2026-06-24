#include <iostream>
using namespace std;
bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
}
int main() {
    string s1 = "abcd";
    string s2 = "cdab";
    if (isRotation(s1, s2))
        cout << "Rotation";
    else
        cout << "Not Rotation";
    return 0;
}