#include <bits/stdc++.h>
using namespace std;

// 1. Function with no return and no parameters
void sayHello() {
    cout << "Hello from a function!" << endl;
}

// 2. Function with parameters and no return
void printSum(int a, int b) {
    cout << "Sum: " << (a + b) << endl;
}

// 3. Function with return value
int square(int x) {
    return x * x;
}

// 4. Function with default arguments
int add(int a, int b = 5) {
    return a + b;
}

// 5. Function overloading (same name, different params)
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b;
}

// 6. Recursive function
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    
    // Function calls
    sayHello();

    printSum(3, 7);

    cout << "Square of 6: " << square(6) << endl;

    cout << "Add with one argument: " << add(10) << endl;   // uses default b=5
    cout << "Add with two arguments: " << add(10, 20) << endl;

    cout << "Multiply int: " << multiply(4, 5) << endl;
    cout << "Multiply double: " << multiply(2.5, 4.2) << endl;

    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}
