#include "ShoppingCart.h"
#include <iostream>
#include <iomanip>

using namespace std;

ShoppingCart::ShoppingCart() {
    totalCost = 0.0;
}

void ShoppingCart::addToCart(Product p, int quantity) {
    bool found = false;

    for (auto& item : cart) {
        if (item.product.id == p.id) {
            item.quantity += quantity;
            found = true;
            break;
        }
    }

    if (!found) {
        cart.push_back(CartItem(p, quantity));
    }

    totalCost += p.price * quantity;
    cout << quantity << " " << p.name << " Added to the cart." << endl;
}

void ShoppingCart::removeFromCart(const string& productId, int quantity) {
    for (int i = 0; i < cart.size(); i++) {
        if (cart[i].product.id == productId) {
            if (cart[i].quantity >= quantity) {
                cart[i].quantity -= quantity;
                totalCost -= cart[i].product.price * quantity;
                cout << quantity << " " << cart[i].product.name << " Removed from cart." << endl;
                if (cart[i].quantity == 0) {
                    cart.erase(cart.begin() + i);
                }
            } else {
                cout << quantity << " " << cart[i].product.name << " cannot be removed." << endl;
            }
            return;
        }
    }
    cout << "Product not found in cart." << endl;
}

void ShoppingCart::viewCart() const {
    cout << "\nYour Cart:\n";
    for (const auto& item : cart) {
        cout << item.product.name << " - Quantity: " << item.quantity
             << ", Price: " << fixed << setprecision(2) << item.product.price
             << " USD, Total: " << item.quantity * item.product.price << " USD" << endl;
    }
    cout << "Total Cost (before discounts): " << totalCost << " USD" << endl;
}

void ShoppingCart::listDiscounts() const {
    discountManager.listDiscounts();
}

void ShoppingCart::checkout() {
    float discount = discountManager.applyDiscounts(cart);
    float finalTotal = totalCost - discount;

    cout << "\nDiscount applied. Final Total in USD: " << fixed << setprecision(2) << finalTotal << " USD" << endl;

    string choice;
    cout << "Do you want to convert to another currency (yes/no)? ";
    cin >> choice;

    if (choice == "yes") {
        string currency;
        cout << "Available currencies: EUR, GBP\n";
        cout << "Enter currency: ";
        cin >> currency;

        if (currency == "EUR") {
            cout << "Final Total in EUR: " << finalTotal * 0.85 << " EUR\n";
        } else if (currency == "GBP") {
            cout << "Final Total in GBP: " << finalTotal * 0.75 << " GBP\n";
        }
    }
}
