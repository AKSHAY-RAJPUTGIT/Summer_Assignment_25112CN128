#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < n) {
        arr[j] = 0;
        j++;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}