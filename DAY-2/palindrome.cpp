#include <iostream>
using namespace std;

int main() {
    int num,temp, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (temp == reverse)
        cout<<"Palindrome Number";
    else
        cout<<"Not a Palindrome Number";
    return 0;
}