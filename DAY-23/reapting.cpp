#include <iostream>
#include <unordered_set>
using namespace std;
char firstRepeating(string s) {
    unordered_set<char> seen;
    for (char ch : s) {
        if (seen.count(ch))
            return ch;  
        seen.insert(ch);
    }
    return '\0';  
}
int main() {
    string s = "abccde";
  
    char ans = firstRepeating(s);
    if (ans != '\0')
        cout << "First repeating character: " << ans;
    else
        cout << "No repeating character found";
    return 0;
}