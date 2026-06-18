#include<iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 40;
    int start = 0, end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << "Element not found";
    return 0;
}