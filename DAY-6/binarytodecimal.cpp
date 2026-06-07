#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long binary;
    cin >> binary;
    int decimal = 0, i = 0;
    while (binary != 0) {
        int digit = binary % 10;
        decimal = decimal + digit * pow(2, i);
        binary = binary / 10;
        i++;
    }
    cout << decimal;
    return 0;
}