#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int left, int mid, int right) {
    int l = mid - left + 1;
    int r = right - mid;

    vector<int> leftA(l), rightA(r);
    for (int i = 0; i < l; i++)
        leftA[i] = a[left + i];
    for (int j = 0; j < r; j++)
        rightA[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = left;
    
    while (i < l && j < r) {
        if (leftA[i] <= rightA[j]) {
            a[k] = leftA[i];
            k++;
            i++;
        } else {
            a[k] = rightA[j];
            k++;
            j++;
        }
    }

    while (i < l) {
        a[k] = leftA[i];
        k++;
        i++;
    }
    while (j < r) {
        a[k] = rightA[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int>& a, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}
