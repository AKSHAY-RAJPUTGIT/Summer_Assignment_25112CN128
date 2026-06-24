#include <iostream>
#include <vector>
using namespace std;
string removeDuplicates(string s) {
    vector<bool> visited(26, false);
    string ans;
    for (char ch : s) {
        if (!visited[ch - 'a']) {
            ans += ch;
            visited[ch - 'a'] = true;
        }
    }
    return ans;
}
int main() {
    string s = "programming";
    cout << removeDuplicates(s);
    return 0;
}