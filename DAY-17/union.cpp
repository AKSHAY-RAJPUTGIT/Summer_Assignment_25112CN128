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
    int uni[n + m];
    int k = 0;
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < k; j++) {
            if(arr1[i] == uni[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            uni[k++] = arr1[i];
        }
    }
    for(int i = 0; i < m; i++) {
        bool found = false;
        for(int j = 0; j < k; j++) {
            if(arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            uni[k++] = arr2[i];
        }
    }
    cout << "Union Array: ";
    for(int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }
    return 0;
}