#include <iostream>
using namespace std;

int displayMenu() {
    cout << "\n--- Grocery Store Menu ---" << endl;
    cout << "1. Rice (Price: 100 per kg)" << endl;
    cout << "2. Wheat (Price: 120 per kg)" << endl;
    cout << "3. Oil (Price: 150 per liter)" << endl;
    cout << "4. Sugar (Price: 100 per kg)" << endl;
    cout << "5. Exit" << endl;
    
    int item;
    cout << "Enter the item number (1-4) or 5 to exit: ";
    cin >> item;
    return item;
}

double calculateTotalCost(int item, int quantity) {
    // Prices for each item
    double prices[] = {0, 100, 120, 150, 100};  // index 0 is unused
    return prices[item] * quantity;
}

double applyDiscount(double totalCost, double &discountAmount) {
    double discount = 0;
    
    // Apply discount based on the total cost
    if (totalCost > 10000) {
        discount = 0.20;
    } else if (totalCost >= 5000) {
        discount = 0.10;
    } else if (totalCost > 500) {
        discount = 0.05;
    }

    discountAmount = totalCost * discount;
    return discount;
}

double getFinalCost(double totalCost, double discountAmount) {
    return totalCost - discountAmount;
}

int main() {
    int item, quantity;
    double totalCost, discountAmount, finalCost, discount;

    item = displayMenu();

    if (item == 5) {
        cout << "Exiting the program." << endl;
        return 0;
    }

    if (item < 1 || item > 4) {
        cout << "Invalid item selection." << endl;
        return 0;
    }

    cout << "Enter the quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number." << endl;
        return 0;
    }

    totalCost = calculateTotalCost(item, quantity);
    discount = applyDiscount(totalCost, discountAmount);
    finalCost = getFinalCost(totalCost, discountAmount);

    // Display the result
    cout << "\nTotal cost: " << totalCost << endl;

    if (discount == 0) {
        cout << "Discount: None" << endl;
    } else {
        cout << "Discount: " << (int)(discount * 100) << "%" << endl;
    }

    cout << "Final cost: " << finalCost << endl;

    return 0;
}
