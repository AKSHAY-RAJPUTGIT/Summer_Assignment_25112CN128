#include <iostream>
using namespace std;
int main() {
    long long n, largest = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if (n > 2)
        largest = n;
    cout << "Largest Prime Factor = " << largest;
    return 0;
}