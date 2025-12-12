#include <bits/stdc++.h>
using namespace std;

void passByReference(int &x) {
    x = x + 10;  // modifies original variable
    cout << "Inside passByReference: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before: " << a << endl;
    passByReference(a);
    cout << "After: " << a << endl; // changed
    return 0;
}
