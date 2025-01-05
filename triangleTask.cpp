#include <iostream>
using namespace std;

int main() {
    int a, b, c;

// Enter sides

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    // Apply If-else

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle. Sides must be greater than 0." << endl;
    }
    else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    }
    else {
        cout << "Invalid Triangle. The sides do not satisfy the triangle inequality." << endl;
    }

    return 0;
}
