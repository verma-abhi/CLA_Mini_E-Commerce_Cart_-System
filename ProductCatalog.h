#ifndef PRODUCTCATALOG_H
#define PRODUCTCATALOG_H

#include <vector>
#include "Product.h"

class ProductCatalog {
private:
    std::vector<Product> products;

public:
    ProductCatalog();
    void showProducts() const;
    Product findById(const std::string& id) const;
};

#endif
