#include <bits/stdc++.h>
using namespace std;

void passByValue(int x) {
    x = x + 10;  // changes only local copy
    cout << "Inside passByValue: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before: " << a << endl;
    passByValue(a);
    cout << "After: " << a << endl; // unchanged
    return 0;
}
