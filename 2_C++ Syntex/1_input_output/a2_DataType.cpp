#include <bits/stdc++.h>
using namespace std;

int main() {

    //  Basic Data Types
    int i = 10;                   // Integer
    long l = 100000;              // Long
    long long ll = 10000000000;   // Long long
    float f = 3.14f;              // Float
    double d = 3.1415926535;      // Double
    long double ld = 3.141592653589793238; // Long double
    char c = 'A';                 // Character
    bool b = true;                // Boolean
    string s = "Hello, C++";      // String

    
    //  Derived Types
    int arr[5] = {1, 2, 3, 4, 5}; // Array
    pair<int, string> p = {1, "one"}; // Pair
    tuple<int, double, string> t = {1, 2.5, "tuple"}; // Tuple

    //  STL Containers
    vector<int> vec = {1, 2, 3};
    set<int> st = {1, 2, 3};
    map<int, string> mp = {{1, "one"}, {2, "two"}};
    unordered_map<string, int> ump = {{"apple", 3}, {"banana", 5}};

    // 🔹 Pointers
    int x = 42;
    int* ptr = &x;

    //  Output
    cout << "Integer: " << i << endl;
    cout << "Long: " << l << endl;
    cout << "Long long: " << ll << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Long double: " << ld << endl;
    cout << "Char: " << c << endl;
    cout << "Bool: " << b << endl;
    cout << "String: " << s << endl;

    cout << "Array element [2]: " << arr[2] << endl;
    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;
    cout << "Tuple: (" << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << ")" << endl;

    cout << "Vector[1]: " << vec[1] << endl;
    cout << "Set contains: ";
    for (auto val : st) cout << val << " ";
    cout << endl;

    cout << "Map[1]: " << mp[1] << endl;
    cout << "Unordered map['apple']: " << ump["apple"] << endl;

    cout << "Pointer value: " << *ptr << endl;

    return 0;
}
