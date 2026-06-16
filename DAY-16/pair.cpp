#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> target;
    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        int x = target - arr[i];

        if(s.find(x) != s.end()) {
            cout << "Pair found: " << x << " " << arr[i];
            return 0;
        }
        s.insert(arr[i]);
    }
    cout << "No pair found";
    return 0;
}