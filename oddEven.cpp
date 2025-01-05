#include <iostream>
using namespace std;

int main() {
    int number; 

    // Entering The Number

    cout << "Enter a number: ";
    cin >> number;

   if (number % 2 == 0) {
    cout << "The number is Even." << endl;
   } else {
    cout << "The number is Odd." << endl;
   }
    return 0;
}
