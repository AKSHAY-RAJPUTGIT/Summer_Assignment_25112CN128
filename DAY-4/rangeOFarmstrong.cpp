#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    for (int i = start; i <= end; i++) {
        int num = i, temp = i;
        int digits = 0, sum = 0, rem;
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
        temp = i;
        while (temp != 0) {
            rem = temp % 10;
            sum = sum + pow(rem, digits);
            temp = temp / 10;
        }
        if (sum == i)
            cout << i << " ";
    }
    return 0;
}