#include <iostream>
using namespace std;
int main() {
    int x, n;
    cin >> x >> n;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    cout << result;
    return 0;
}