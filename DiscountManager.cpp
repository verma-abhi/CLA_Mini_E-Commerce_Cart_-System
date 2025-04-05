#include "DiscountManager.h"
#include <iostream>

using namespace std;

DiscountManager::DiscountManager() {
    discounts.push_back(Discount("BUY 1 GET 1 FREE", "Fashion", "buy1get1free", 0.0));
    discounts.push_back(Discount("10 PERCENT OFF ON ELECTRONICS", "Electronics", "percentage", 10.0));
}

void DiscountManager::listDiscounts() const {
    cout << "\nAvailable Discounts:\n";
    for (int i = 0; i < discounts.size(); i++) {
        cout << i + 1 << ". " << discounts[i].description << endl;
    }
}

float DiscountManager::applyDiscounts(const vector<CartItem>& cart) {
    float totalDiscount = 0.0;
    cout << "\nApplying Discounts... : " << endl;

    for (const auto& item : cart) {
        for (const auto& discount : discounts) {
            if (item.product.category == discount.category) {
                if (discount.type == "buy1get1free" && item.quantity >= 2) {
                    cout << discount.description << " on " << discount.category << " applied." << endl;
                    totalDiscount += (item.quantity / 2) * item.product.price;
                } else if (discount.type == "percentage") {
                    cout << discount.description << " on " << discount.category << " applied." << endl;
                    totalDiscount += (discount.value / 100.0f) * (item.quantity * item.product.price);
                }
            }
        }
    }

    return totalDiscount;
}
