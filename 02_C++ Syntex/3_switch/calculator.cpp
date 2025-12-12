#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter an operator (+ - * /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Sum = " << a + b << endl;
            break;
        case '-':
            cout << "Difference = " << a - b << endl;
            break;
        case '*':
            cout << "Product = " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Quotient = " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
