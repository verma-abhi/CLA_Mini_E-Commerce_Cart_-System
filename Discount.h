#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <string>
using namespace std;

class Discount {
public:
    string description;
    string category;
    string type; // "percentage" or "buy1get1free"
    float value;

    Discount(string desc = "", string cat = "", string t = "", float val = 0.0);
};

#endif
