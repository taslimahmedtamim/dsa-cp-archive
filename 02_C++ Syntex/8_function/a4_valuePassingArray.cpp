#include <bits/stdc++.h>
using namespace std;

// Pass by Value (array decays into pointer, so it’s actually reference-like!)
void ArrayByValue(int arr[], int n) {
    arr[0] = 100;  // modifies original array (not really value!)
}

// Pass by Reference (using &)
void ArrayByReference(int (&arr)[5]) {
    arr[1] = 200;  // modifies original array
}

// Pass by Pointer
void ArrayByPointer(int *arr, int n) {
    arr[2] = 300;  // modifies original array
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    ArrayByValue(arr, 5);
    cout << "After modifyArrayByValue: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    ArrayByReference(arr);
    cout << "After modifyArrayByReference: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    ArrayByPointer(arr, 5);
    cout << "After modifyArrayByPointer: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
