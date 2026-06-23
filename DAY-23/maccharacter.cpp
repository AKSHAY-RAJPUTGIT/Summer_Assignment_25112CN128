#include <iostream>
#include <vector>
using namespace std;
char maxOccurringChar(string s) {
    vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    int maxi = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxi) {
            maxi = freq[i];
            ans = i + 'a';
        }
    }
    return ans;
}
int main() {
    string s = "testsample";
    cout << maxOccurringChar(s);
    return 0;
}