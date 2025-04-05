#ifndef DISCOUNTMANAGER_H
#define DISCOUNTMANAGER_H

#include <vector>
#include "Discount.h"
#include "CartItem.h"

class DiscountManager {
private:
    std::vector<Discount> discounts;

public:
    DiscountManager();
    void listDiscounts() const;
    float applyDiscounts(const std::vector<CartItem>& cart);
};

#endif
