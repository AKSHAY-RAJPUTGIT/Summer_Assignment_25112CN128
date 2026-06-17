#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    cout << "Common Elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}