#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s1 = "hello";
    string s2 = "world";
    vector<int> freq(26, 0);
    for(char ch : s1)
        freq[ch - 'a'] = 1;
    cout << "Common characters: ";
    for(char ch : s2) {
        if(freq[ch - 'a'] == 1) {
            cout << ch << " ";
            freq[ch - 'a'] = 2; // avoid duplicates
        }
    }
    return 0;
}