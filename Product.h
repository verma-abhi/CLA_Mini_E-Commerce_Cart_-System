#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
public:
    string id;
    string name;
    float price;
    string category;

    Product(string pId = "", string pName = "", float pPrice = 0.0, string pCategory = "");
};

#endif
