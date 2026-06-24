#include <iostream>
using namespace std;
string longestWord(string s) {
    string word, longest;
    for (char ch : s) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (word.length() > longest.length())
                longest = word;
            word.clear();
        }
    }
    if (word.length() > longest.length())
        longest = word;
    return longest;
}
int main() {
    string s = "I love competitive programming";
    cout << longestWord(s);
    return 0;
}