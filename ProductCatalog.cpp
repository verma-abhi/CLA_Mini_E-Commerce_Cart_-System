#include "ProductCatalog.h"
#include <iostream>
#include <iomanip>

using namespace std;

ProductCatalog::ProductCatalog() {
    products.push_back(Product("P001", "Laptop", 1000.0, "Electronics"));
    products.push_back(Product("P002", "Phone", 500.0, "Electronics"));
    products.push_back(Product("P003", "T-Shirt", 20.0, "Fashion"));
}

void ProductCatalog::showProducts() const {
    cout << "\nAvailable Products:\n";
    for (const auto& product : products) {
        cout << "ID: " << product.id
             << ", Name: " << product.name
             << ", Price: " << fixed << setprecision(2) << product.price
             << " USD, Category: " << product.category << endl;
    }
}

Product ProductCatalog::findById(const string& id) const {
    for (const auto& product : products) {
        if (product.id == id) return product;
    }
    return Product();  // Return empty product if not found
}
