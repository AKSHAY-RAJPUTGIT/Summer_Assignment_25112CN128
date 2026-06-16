#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxFreq = 0;
    int element;
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }
    cout << "Maximum Frequency Element = " << element << endl;
    cout << "Frequency = " << maxFreq;
    return 0;
}