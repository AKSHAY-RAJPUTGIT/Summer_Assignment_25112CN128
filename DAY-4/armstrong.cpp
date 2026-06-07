#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, rem, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }
    if (sum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    return 0;
}