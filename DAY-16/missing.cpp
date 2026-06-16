#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr(n - 1);
    cout << "Enter elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    cout << "Missing Number = " << totalSum - arraySum;
    return 0;
}