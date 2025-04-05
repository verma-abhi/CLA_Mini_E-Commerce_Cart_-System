#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "CartItem.h"
#include "DiscountManager.h"

class ShoppingCart {
private:
    std::vector<CartItem> cart;
    float totalCost;
    DiscountManager discountManager;

public:
    ShoppingCart();
    void addToCart(Product p, int quantity);
    void removeFromCart(const std::string& productId, int quantity);
    void viewCart() const;
    void listDiscounts() const;
    void checkout();
};

#endif
