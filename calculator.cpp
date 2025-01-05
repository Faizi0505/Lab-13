#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "num1: " << num1 << " operation: " << operation << " num2: " << num2 << " The result is " << num1 + num2 << "." << endl;
            break;
        case '-':
            cout << "num1: " << num1 << " operation: " << operation << " num2: " << num2 << " The result is " << num1 - num2 << "." << endl;
            break;
        case '*':
            cout << "num1: " << num1 << " operation: " << operation << " num2: " << num2 << " The result is " << num1 * num2 << "." << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Division by zero is not allowed." << endl;
            } else {
                cout << "num1: " << num1 << " operation: " << operation << " num2: " << num2 << " The result is " << num1 / num2 << "." << endl;
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Division by zero is not allowed for modulus operation." << endl;
            } else {
                cout << "num1: " << num1 << " operation: " << operation << " num2: " << num2 << " The result is " << (int)num1 % (int)num2 << "." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}
