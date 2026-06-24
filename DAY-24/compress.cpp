#include <iostream>
using namespace std;
string compressString(string s) {
    string ans;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        ans += s[i];
        ans += to_string(count);
    }
    return ans;
}
int main() {
    string s = "aaabbccccd";
    cout << compressString(s);
    return 0;
}