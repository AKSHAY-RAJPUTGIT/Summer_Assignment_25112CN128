#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a, string b) {
    return a.length() < b.length();
}
int main() {
    vector<string> words = {"apple", "cat", "banana", "dog", "elephant"};
    sort(words.begin(), words.end(), compare);
    for (string word : words) {
        cout << word << " ";
    }
    return 0;
}