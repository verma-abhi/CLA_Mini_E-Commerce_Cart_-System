#ifndef CARTITEM_H
#define CARTITEM_H

#include "Product.h"

class CartItem {
public:
    Product product;
    int quantity;

    CartItem(Product p, int q);
};

#endif

