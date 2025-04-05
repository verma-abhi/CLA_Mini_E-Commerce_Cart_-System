#include <iostream>
#include "ShoppingCart.h"
#include "ProductCatalog.h"

using namespace std;

int main() {
    ShoppingCart cart;
    ProductCatalog catalog;

    string command, productId;
    int quantity;
    cout<< "Welcome to the Shopping Cart System!" << endl;
    while (true) {
        cout << "\nEnter command (add_to_cart, remove_from_cart, view_cart, list_discounts, checkout, quit): ";
        cin >> command;

        if (command == "add_to_cart") {
            catalog.showProducts();
            cout << "Enter Product ID and Quantity: ";
            cin >> productId >> quantity;
            Product p = catalog.findById(productId);
            if (p.id != "") {
                cart.addToCart(p, quantity);
            } else {
                cout << "Product not found!" << endl;
            }
        } else if (command == "remove_from_cart") {
            cout << "Enter Product ID and Quantity to remove: ";
            cin >> productId >> quantity;
            cart.removeFromCart(productId, quantity);
        } else if (command == "view_cart") {
            cart.viewCart();
        } else if (command == "list_discounts") {
            cart.listDiscounts();
        } else if (command == "checkout") {
            cart.checkout();
        } else if (command == "quit") {
            break;
        } else {
            cout << "Invalid command!" << endl;
        }
    }

    return 0;
}
