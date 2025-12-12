#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"


bool isSortedInDescending(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1])  // current > previous → not descending
            return false;
    }
    return true;
}


bool isSortedInAscending(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1])  // current < previous → not ascending
            return false;
    }
    return true;
}

int main() {
    fastio;

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSortedInDescending(arr, n)) {
        cout << "Descending" << endl;
    }
    else if (isSortedInAscending(arr, n)) {
        cout << "Ascending" << endl;
    }
    else {
        cout << "Not sorted" << endl;
    }

    return 0;
}
