#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello";
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    int start = 0, end = len - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str;
    return 0;
}