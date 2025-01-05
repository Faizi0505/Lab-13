#include <iostream>
using namespace std;

int main() {
    int math, english;
    float percentage;
    
    // Enter the marks

    cout << "Enter Math score: " ;
    cin >> math;
    cout << "Enter English score: ";
    cin >> english;
    cout << "Enter overall percentage: ";
    cin >> percentage;

    // Apply if-alse

    if ((math >= 85) && (english >= 80) && (percentage > 90)) {
        cout << "Eligible for Scholarship." << endl;
    } else {
        cout << "Not Eligible." << endl;
    }

    return 0;
}
